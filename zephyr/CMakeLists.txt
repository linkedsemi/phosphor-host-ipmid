if(CONFIG_OPENBMC_PHOSPHOR_HOST_IPMID)
    zephyr_library_named(phosphor-host-ipmid)
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

        test.cpp
    )

    zephyr_library_include_directories(
        ${ZEPHYR_CURRENT_MODULE_DIR}
        ${ZEPHYR_CURRENT_MODULE_DIR}/include
        )

    zephyr_export_include_directories(${ZEPHYR_CURRENT_MODULE_DIR})
    zephyr_export_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/include)

    zephyr_library_link_libraries(boost)
    # zephyr_library_link_libraries(sd-bus)
    zephyr_library_link_libraries(sdbusplus)
    # zephyr_library_link_libraries(zbusplus)
    zephyr_library_link_libraries(phosphor-logging)
    zephyr_library_link_libraries(phosphor-objmgr)
    # zephyr_library_link_libraries(phosphor-user-manager)

    # zephyr_library_link_libraries(zephyr-test)

    if(NOT CONFIG_WOLFSSL_SETTINGS_FILE)
        message(FATAL_ERROR "ERROR: CONFIG_WOLFSSL_SETTINGS_FILE no set!
            Please set in prj.conf")
    endif()

    zephyr_library_compile_definitions(
        _GNU_SOURCE
        _GLIBCXX_HAVE_ALIGNED_ALLOC
    )

    zephyr_linker_sources(
        RODATA
        ipmi_netfn_register.ld
    )

    if(EXISTS "${ZEPHYR_MK_ROFS_MODULE_DIR}")
        #install /usr/share/ipmi-providers/
        include(${ZEPHYR_MK_ROFS_MODULE_DIR}/zephyr/utils.cmake)
        file(GLOB FILES ${ZEPHYR_CURRENT_MODULE_DIR}/phosphor-ipmi-config/*.json)
        # configure/后跟目标配置文件在文件系统中的绝对路径, 即usr/share/crashdump/input为配置文件在zephyr文件系统中的路径
        set(dest_file ${CMAKE_BINARY_DIR}/configure_file/usr/share/ipmi-providers/)
        # install_config_file的具体使用方法请参考mk-rofs中utils.cmake
        install_config_file(${FILES} DESTINATION ${dest_file})

        # 让 CMake 监听 JSON 文件变化（解决 ninja no work to do）
        set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS ${FILES})
    else()
        # message(WARNING "mk-rofs module directory not found: ${ZEPHYR_MK_ROFS_MODULE_DIR}, skip ipmi json config install")

        message(FATAL_ERROR "Required mk-rofs module missing at ${ZEPHYR_MK_ROFS_MODULE_DIR}, build abort!")
    endif()

endif()
