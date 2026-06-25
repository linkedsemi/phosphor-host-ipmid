#include <tuple>
#include <map>
#include <string>
#include <memory>
#include <vector>

#include <zephyr/kernel.h>

#include <systemd/sd-bus.h>
#include <sdbusplus/asio/connection.hpp>

#include <ipmid/types.hpp>

// #include "zbusplus.h"

// #include "test/test.hpp"
#include <sdbusplus/asio/sd_event.hpp>
#include <dbus_broker.h>
#include <printk_thread.h>
#include <task_def.hpp>

// Global io_context for background processing
static std::shared_ptr<boost::asio::io_context> g_io_context;
static struct k_thread io_worker_thread;
static K_THREAD_STACK_DEFINE(io_worker_stack, 8192);

// Worker function to run io_context in background
void io_worker_func(void* p1, void* p2, void* p3)
{
    printk_thread("[IO_WORKER] Background io_context worker started\n");
    auto io = static_cast<std::shared_ptr<boost::asio::io_context>*>(p1);
    (*io)->run();
    printk_thread("[IO_WORKER] Background io_context worker exited\n");
}

// 使用该测试需要修改boost/asio/spawn.hpp, 增加一个basic_yield_context空的构造函数
// basic_yield_context(
//     const basic_yield_context<OtherExecutor> &other,
//     constraint_t<is_convertible<OtherExecutor, Executor>::value> = 0)
//     : spawned_thread_(other.spawned_thread_), executor_(other.executor_),
//       ec_(other.ec_) {}
//
// +  basic_yield_context() {}
// void ipmid_cmd_test()
// {
//     printk_thread("%s\n", __FUNCTION__);
    
//     ipmi::NetFn netFn = 6;
//     uint8_t lun = 0;
//     ipmi::Cmd cmd = 4;
//     int channel = 0;
//     int userId = 0;
//     uint32_t sessionId = 0;
//     ipmi::Privilege privilege = ipmi::Privilege::Admin;
//     int rqSA = 0;
//     int hostIdx = 0;
//     ipmi::SecureBuffer data;
//     boost::asio::yield_context yield;

//     auto ctx = std::make_shared<ipmi::Context>(
//         getSdBus(), netFn, lun, cmd, channel, userId, sessionId, privilege,
//         rqSA, hostIdx, yield);
//     auto request = std::make_shared<ipmi::message::Request>(
//         ctx, std::forward<ipmi::SecureBuffer>(data));

//     ipmi::message::Response::ptr response = ipmi::executeIpmiCommand(request);
//     printk_thread("%u, %ld: %#x %#x\n",
//         response->cc, response->payload.size(), 
//         response->payload.data()[0], response->payload.data()[1]);

//     return;
// }


int test_ipmi_dbus_sendrecv(sd_bus *bus, uint8_t netfn, uint8_t lun, uint8_t cmd)
{
	static const char *destination = "xyz.openbmc_project.Ipmi.Host";
	static const char *object_path = "/xyz/openbmc_project/Ipmi";
	static const char *interface = "xyz.openbmc_project.Ipmi.Server";
	static const char *method_name = "execute";
	static const char SD_BUS_TYPE_3_BYTES[] = {
		SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE, 0
	};
	static const char SD_BUS_TYPE_4_BYTES[] = {
		SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE,
		SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE, 0
	};
	static const char SD_BUS_TYPE_DICT_OF_VARIANTS[] = {
		SD_BUS_TYPE_ARRAY,
		SD_BUS_TYPE_DICT_ENTRY_BEGIN,
		SD_BUS_TYPE_STRING, SD_BUS_TYPE_VARIANT,
		SD_BUS_TYPE_DICT_ENTRY_END, 0
	};
	static const char SD_BUS_TYPE_IPMI_RESPONSE[] = {
		SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE,
		SD_BUS_TYPE_BYTE, SD_BUS_TYPE_BYTE,
		SD_BUS_TYPE_ARRAY, SD_BUS_TYPE_BYTE, 0
	};

	sd_bus_message *request = NULL;
	int rc;
	sd_bus_error error = SD_BUS_ERROR_NULL;
	sd_bus_message* reply = NULL;
	uint8_t recv_netfn;
	uint8_t recv_lun;
	uint8_t recv_cmd;
	uint8_t recv_cc;
	const void *data;
	size_t data_len;

	/* The D-Bus xyz.openbmc_project.Ipmi.Server.execute interface
	 * looks like this:
	 *
	 * Request:
	 *   byte: net function
	 *   byte: lun
	 *   byte: command
	 *   byte array: data (possibly zero length)
	 *   array of (string,variant): options
	 * Response:
	 *   byte: net function
	 *   byte: lun
	 *   byte: command
	 *   byte: completion code
	 *   byte array: response data (possibly zero length)
	 */
	rc = sd_bus_message_new_method_call(bus, &request, destination,
	                                    object_path, interface,
					    method_name);
	if (rc < 0) {
		printk_thread("%s: failed to create message: %s\n",
		        __func__, strerror(-rc));
		goto out_no_free;
	}
	/* pack the header: netfn, lun, cmd */
	rc = sd_bus_message_append(request, SD_BUS_TYPE_3_BYTES, netfn,
	                           lun, cmd);
	if (rc < 0) {
		printk_thread("%s: failed to append parameters\n", __func__);
		goto out_free_request;
	}
	/* pack the variable length data */
	rc = sd_bus_message_append_array(request, SD_BUS_TYPE_BYTE,
	                                 NULL, 0);
	if (rc < 0) {
		printk_thread("%s: failed to append body\n", __func__);
		goto out_free_request;
	}

	/* Options are only needed for session-based channels, but
	 * in order to fulfill the correct signature, an empty array
	 * must be packed */
	rc = sd_bus_message_append(request, SD_BUS_TYPE_DICT_OF_VARIANTS,
	                           NULL, 0);
	if (rc < 0) {
		printk_thread("%s: failed to append options\n", __func__);
		goto out_free_request;
	}

	rc = sd_bus_call(bus, request, 0, &error, &reply);
	if (rc < 0) {
		printk_thread("%s: failed to send dbus message (%s), rc %d\n",
		        __func__, error.message, rc);
		goto out_free_request;
	}

	/* unpack the response; check that it has the expected types */
	rc = sd_bus_message_enter_container(reply, SD_BUS_TYPE_STRUCT,
	                                    SD_BUS_TYPE_IPMI_RESPONSE);
	if (rc < 0) {
		printk_thread("%s: failed to parse reply\n", __func__);
		goto out_free_reply;
	}
	/* read the header: CC netfn lun cmd */
	rc = sd_bus_message_read(reply, SD_BUS_TYPE_4_BYTES, &recv_netfn,
	                         &recv_lun, &recv_cmd, &recv_cc);
	if (rc < 0) {
		printk_thread("%s: failed to read reply\n", __func__);
		goto out_free_reply;
	}
	/* read the variable length data */
	rc = sd_bus_message_read_array(reply, SD_BUS_TYPE_BYTE,
	                               &data, &data_len);
	if (rc < 0) {
		printk_thread("%s: failed to read reply data\n", __func__);
		goto out_free_reply;
	}
	rc = sd_bus_message_exit_container(reply);
	if (rc < 0) {
		printk_thread("%s: final unpack of message failed\n",
		        __func__);
		goto out_free_reply;
	}

    printk_thread("recv data:");
    for (uint32_t loop = 0; loop < data_len; loop++)
    {
        printk_thread(" %02x", ((uint8_t*)data)[loop]);
    }
    printk_thread("\n");

out_free_reply:
	/* message unref will free resources owned by the message */
	sd_bus_message_unref(reply);
out_free_request:
	sd_bus_message_unref(request);
out_no_free:
	return 0;
}

using IpmiDbusRspType = std::tuple<uint8_t, uint8_t, uint8_t, uint8_t, std::vector<uint8_t>>;
void do_sender_task(sdbusplus::asio::connection& conn, uint8_t netFn, uint8_t lun, uint8_t cmd, const std::vector<uint8_t>& commandData, std::map<std::string, ipmi::Value>& options)
{
    printk_thread("do sender_task");
    conn.async_method_call(
        [&](const boost::system::error_code ec,
            const IpmiDbusRspType& response) {
            printk("Got response\n");
            if (ec)
            {
                printk("Error getting dbus names: %s\n", ec.message().c_str());
                return;
            }

            const uint8_t& cc = std::get<3>(response);
            const std::vector<uint8_t>& responseData = std::get<4>(response);
            printk("netfn %#x, lun %#x, cmd %#x, cc %#x, response len %u\n, data: ",
                std::get<0>(response), std::get<1>(response), std::get<2>(response),
                cc, responseData.size());
            for (auto i : responseData)
            {
                printk("%#02x ", i);
            }
            printk("\n");
        },
        "xyz.openbmc_project.Ipmi.Host",
        "/xyz/openbmc_project/Ipmi",
        "xyz.openbmc_project.Ipmi.Server",
        "execute", netFn, lun, cmd, commandData, options);

        // timer.expires_after(std::chrono::seconds(1));
        // timer.async_wait([&](const boost::system::error_code ec) {
        //     do_sender_task(conn, timer, netFn, lun, cmd, commandData, options);
        // });
}

void signal_test(sdbusplus::asio::connection& conn)
{

}

void sender_task(void* p1, void* p2, void* p3)
{
    printk_thread("io_context");
    auto io = std::make_shared<boost::asio::io_context>();
    g_io_context = io;  // Save for worker thread

    sd_bus *busTmp = NULL;

    printk_thread("sd_bus_default_user");
    int rc = connect_to_dbroker(&busTmp);
    // sd_bus_default_user(&busTmp);
    // int rc = sd_bus_open_system(&busTmp);
    if (!busTmp) {
        printk_thread("%s: Failed to get default bus: %s\n",
		        __func__, strerror(-rc));
        return;
    }
    // busTmp->unique_name = "sender_task";
    int name_rc = sd_bus_request_name(busTmp, "xyz.openbmc_project.sender_task", 0);
    if (name_rc < 0) {
        printk_thread("sd_bus_request_name failed: %d (broker busy, retrying...)", name_rc);
        /* Retry once after giving broker time to drain */
        k_msleep(2000);
        name_rc = sd_bus_request_name(busTmp, "xyz.openbmc_project.sender_task", 0);
        if (name_rc < 0) {
            printk_thread("sd_bus_request_name failed again: %d, continuing without name", name_rc);
            /* Continue anyway - the bus connection still works for method calls */
        }
    }
    // printk_thread("init_zbus_observers");
    // init_zbus_observers(busTmp, "test");

    printk_thread("connection\n");
    auto conn = sdbusplus::asio::connection(*io, busTmp);

    // auto timer = boost::asio::steady_timer(*io);
    // printk_thread("[sender_task] getSdBus\n");
	// auto conn = getSdBus();

	sdbusplus::asio::sd_event_wrapper sdEvents(*io);

    printk_thread("var init");
    uint8_t netFn = 6;
    uint8_t lun = 0;
    uint8_t cmd = 4;
    std::vector<uint8_t> commandData;
    std::map<std::string, ipmi::Value> options;

    printk_thread("start");
    // timer.expires_after(std::chrono::seconds(1));
    // timer.async_wait([&](const boost::system::error_code ec) {
        // do_sender_task(conn, timer, netFn, lun, cmd, commandData, options);
    // });

    // test_ipmi_dbus_sendrecv(busTmp, 6, 0, 4);


    // Start io_context in a background Zephyr thread
    printk_thread("[TEST] Starting io_context worker thread");
    k_thread_create(&io_worker_thread, io_worker_stack, K_THREAD_STACK_SIZEOF(io_worker_stack),
                    io_worker_func, &io, NULL, NULL,
                    4, 0, K_NO_WAIT);
    
    // Give the worker thread time to start
    k_msleep(100);
    printk_thread("[TEST] Worker thread started, submitting commands");

    printk_thread("[TEST] Submitting 20 commands with delays");
    for (int i = 0; i < 20; i++)
    {
        do_sender_task(conn, netFn, lun, cmd, commandData, options);

        // Add small delay between batches to allow processing
        if ((i + 1) % 10 == 0) {
            printk_thread("[TEST] Submitted batch %d, waiting for responses...", (i + 1) / 10);
            k_msleep(200);  // Wait 500ms for D-Bus responses
        }
    }

    printk_thread("[TEST] All commands submitted, waiting for completion");
    k_msleep(1500);  // Wait for remaining operations

    // Stop the io_context
    printk_thread("[TEST] Stopping io_context");
    io->stop();

    printk_thread("[TEST] Test completed successfully");

}

#define CONFIG_THREAD_PRI_TEST 5
#define IPMID_TEST_STACK_SIZE (32 * 1024)
static pthread_t IPMID_test_thread;

/* sender_task handler wrapper for CREATE_TASK_WITH_PTHREAD macro */
static void *sender_task_handler(void *arg)
{
    (void)arg;
    sender_task(NULL, NULL, NULL);
    return NULL;
}

int ipmid_test(void)
{
    printk_thread("Start IPMI test thread...");
    CREATE_TASK_WITH_PTHREAD(&IPMID_test_thread, sender_task, IPMID_TEST_STACK_SIZE);
    return 0;
}

// DECLARATION_TEST_FUNC_REGISTER(ipmid_test);
