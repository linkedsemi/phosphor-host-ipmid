#pragma once

#if CONFIG_OPENBMC_PHOSPHOR_HOST_IPMID
int ipmid_init();
#else
#define ipmid_init()    0
#endif