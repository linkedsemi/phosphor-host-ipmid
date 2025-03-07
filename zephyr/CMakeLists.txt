if(CONFIG_OPENBMC_PHOSPHOR_HOST_IPMID)
    zephyr_library()
    zephyr_library_sources(
        ${ZEPHYR_CURRENT_MODULE_DIR}/ipmid-new.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/libipmid/sdbus-asio.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/libipmid/signals.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/libipmid/systemintf-sdbus.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/libipmid/utils.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/channel_layer.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/channel_mgmt.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/cipher_mgmt.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/app/channel.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/app/watchdog.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/app/watchdog_service.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/apphandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/sys_info_param.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/sensorhandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/storagehandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/chassishandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/dcmihandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/ipmisensor.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/entity_map_json.cpp

        # ${ZEPHYR_CURRENT_MODULE_DIR}/transporthandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/globalhandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/groupext.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/selutility.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/ipmi_fru_info_area.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/read_fru_data.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/sensordatahandler.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/channelcommands.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/host-cmd-manager.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/settings.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/scripts/fru-read-gen.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/scripts/inventory-sensor-gen.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/scripts/sensor-gen.cpp
        ${ZEPHYR_CURRENT_MODULE_DIR}/storageaddsel.cpp

         ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/user_layer.cpp
         ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/user_mgmt.cpp
         ${ZEPHYR_CURRENT_MODULE_DIR}/user_channel/passwd_mgr.cpp

        test.c
    )
    zephyr_library_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/zephyr)
    zephyr_library_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/)

    zephyr_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/include)
    zephyr_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/)

    zephyr_library_compile_definitions(
        _GNU_SOURCE
        _GLIBCXX_HAVE_ALIGNED_ALLOC
    )

    zephyr_linker_sources(
        RODATA
        ipmi_netfn_register.ld
    )
endif()
