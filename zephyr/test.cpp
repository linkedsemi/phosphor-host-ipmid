#include <tuple>
#include <map>
#include <string>
#include <memory>
#include <vector>

#include <zephyr/kernel.h>

#include <sd-bus.h>
#include <sdbusplus/asio/connection.hpp>

#include <ipmid/types.hpp>

#include "zbusplus.h"

#include "test/test.hpp"


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
//     printk("%s\n", __FUNCTION__);
    
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
//     printk("%u, %ld: %#x %#x\n", 
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
        printk(" %02x", ((uint8_t*)data)[loop]);
    }
    printk("\n");

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
    printk("\n");
    printk_thread("do sender_task");
    conn.async_method_call(
        [&](const boost::system::error_code ec,
            const IpmiDbusRspType& response) {
            printk_thread("Got response");
            if (ec)
            {
                printk_thread("Error getting dbus names: %s", ec.message().c_str());
                return;
            }

            const uint8_t& cc = std::get<3>(response);
            const std::vector<uint8_t>& responseData = std::get<4>(response);
            printk_thread("netfn %#x, lun %#x, cmd %#x, cc %#x, response len %u\n, data: ",
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
    sd_bus *busTmp = NULL;

    printk_thread("sd_bus_default_user");
    // sd_bus_default_user(&busTmp);
    sd_bus_open_system(&busTmp);
    // busTmp->unique_name = "sender_task";
    sd_bus_request_name(busTmp, "sender_task", 0);
    printk_thread("init_zbus_observers");
    init_zbus_observers(busTmp, "test");

    printk_thread("connection");
    auto conn = sdbusplus::asio::connection(*io, busTmp);
    // auto timer = boost::asio::steady_timer(*io);
    // printk("[sender_task] getSdBus\n");
	// auto conn = getSdBus();

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
    // do_sender_task(conn, netFn, lun, cmd, commandData, options);

    // k_sleep(K_SECONDS(2));

    // io->run();

    test_ipmi_dbus_sendrecv(busTmp, 6, 0, 4);
    
}

#define CONFIG_THREAD_PRI_TEST 5
#define IPMID_TEST_STACK_SIZE (32 * 1024)
struct k_thread IPMID_test_thread;
K_KERNEL_STACK_MEMBER(IPMID_test_task_stack, IPMID_TEST_STACK_SIZE);

static void ipmid_test()
{
	printk_thread("Wait 3s...");
	k_sleep(K_SECONDS(3));

    printk_thread("Start IPMI test thread...");
	k_thread_create(&IPMID_test_thread, IPMID_test_task_stack, K_THREAD_STACK_SIZEOF(IPMID_test_task_stack),
			sender_task, NULL, NULL, NULL, CONFIG_THREAD_PRI_TEST, 0, K_NO_WAIT);
	k_thread_name_set(&IPMID_test_thread, "IPMI TEST");
}

DECLARATION_TEST_FUNC_REGISTER(ipmid_test);
