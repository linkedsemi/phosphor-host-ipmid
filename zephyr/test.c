#include <sd-bus.h>
#include <zephyr/kernel.h>
#include "test/test.h"

extern void sender_task(void* p1, void* p2, void* p3);
#define CONFIG_THREAD_PRI_TEST 5
#define TEST_THREAD_STACK_SIZE (32 * 1024)
struct k_thread TEST_thread;
K_KERNEL_STACK_MEMBER(TEST_task_stack, TEST_THREAD_STACK_SIZE);

static void ipmid_test()
{
	printk_thread("Wait 3s...");
	k_sleep(K_SECONDS(3));

    printk_thread("Start IPMI test thread...");
	k_thread_create(&TEST_thread, TEST_task_stack, K_THREAD_STACK_SIZEOF(TEST_task_stack),
			sender_task, NULL, NULL, NULL, CONFIG_THREAD_PRI_TEST, 0, K_NO_WAIT);
	k_thread_name_set(&TEST_thread, "IPMI TEST");
}

DECLARATION_TEST_FUNC_REGISTER(ipmid_test);
