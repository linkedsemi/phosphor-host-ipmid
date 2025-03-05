// !!! WARNING: This is a GENERATED Code..Please do NOT Edit !!!

#include "sensordatahandler.hpp"

#include <ipmid/types.hpp>

namespace ipmi {
namespace sensor {

extern const IdInfoMap __attribute__((init_priority(101))) sensors = {
{3,{

        .entityType = 34,
        .instance = 1,
        .sensorType = 15,
        .sensorPath = "/xyz/openbmc_project/state/host0",
        .sensorInterface = "xyz.openbmc_project.State.Boot.Progress",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = set::eventdata2,
        .getFunc = get::eventdata2,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameProperty,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Boot.Progress",{
                    {"BootProgress",{
                    {
                    },
                    {
                        { 19,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.OSStart"),
                            }
                        },
                        { 0,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.Unspecified"),
                            }
                        },
                        { 1,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.MemoryInit"),
                            }
                        },
                        { 3,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.SecondaryProcInit"),
                            }
                        },
                        { 7,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.PCIInit"),
                            }
                        },
                        { 20,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.Boot.Progress.ProgressStages.MotherboardInit"),
                            }
                        },
                    }}},
            }},
     },
}},
{5,{

        .entityType = 35,
        .instance = 1,
        .sensorType = 31,
        .sensorPath = "/xyz/openbmc_project/state/host0",
        .sensorInterface = "xyz.openbmc_project.State.OperatingSystem.Status",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = set::assertion,
        .getFunc = get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameProperty,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.OperatingSystem.Status",{
                    {"OperatingSystemState",{
                    {
                    },
                    {
                        { 2,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.PXEBoot"),
                            }
                        },
                        { 6,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.BootComplete"),
                            }
                        },
                        { 4,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.CDROMBoot"),
                            }
                        },
                        { 1,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.CBoot"),
                            }
                        },
                        { 3,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.DiagBoot"),
                            }
                        },
                        { 5,{
                                SkipAssertion::NONE,
                            std::string("xyz.openbmc_project.State.OperatingSystem.Status.OSStatus.ROMBoot"),
                            }
                        },
                    }}},
            }},
     },
}},
{7,{

        .entityType = 34,
        .instance = 2,
        .sensorType = 195,
        .sensorPath = "/xyz/openbmc_project/state/host0",
        .sensorInterface = "xyz.openbmc_project.Control.Boot.RebootAttempts",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = set::assertion,
        .getFunc = get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameProperty,
        .propertyInterfaces = {
            {"xyz.openbmc_project.Control.Boot.RebootAttempts",{
                    {"AttemptsLeft",{
                    {
                    },
                    {
                        { 255,{
                                }},
                    }}},
            }},
     },
}},
{11,{

        .entityType = 34,
        .instance = 3,
        .sensorType = 202,
        .sensorPath = "/xyz/openbmc_project/control/power_supply_redundancy",
        .sensorInterface = "xyz.openbmc_project.Control.PowerSupplyRedundancy",
        .sensorReadingType = 3,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = set::assertion,
        .getFunc = get::assertion,
        .mutability = Mutability(Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameProperty,
        .propertyInterfaces = {
            {"xyz.openbmc_project.Control.PowerSupplyRedundancy",{
                    {"PowerSupplyRedundancyEnabled",{
                    {
                    },
                    {
                        { 0,{
                                SkipAssertion::NONE,
                            false,
                            }
                        },
                        { 1,{
                                SkipAssertion::NONE,
                            true,
                            }
                        },
                    }}},
            }},
     },
}},
{18,{

        .entityType = 208,
        .instance = 1,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core0",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{21,{

        .entityType = 208,
        .instance = 2,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core1",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{24,{

        .entityType = 208,
        .instance = 3,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core2",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{27,{

        .entityType = 208,
        .instance = 4,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core3",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{30,{

        .entityType = 208,
        .instance = 5,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core4",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{33,{

        .entityType = 208,
        .instance = 6,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core5",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{36,{

        .entityType = 208,
        .instance = 7,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core6",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{39,{

        .entityType = 208,
        .instance = 8,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core7",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{42,{

        .entityType = 208,
        .instance = 9,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core8",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{45,{

        .entityType = 208,
        .instance = 10,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core9",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{48,{

        .entityType = 208,
        .instance = 11,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core10",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{51,{

        .entityType = 208,
        .instance = 12,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core11",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{54,{

        .entityType = 208,
        .instance = 13,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core12",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{57,{

        .entityType = 208,
        .instance = 14,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core13",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{60,{

        .entityType = 208,
        .instance = 15,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core14",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{63,{

        .entityType = 208,
        .instance = 16,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core15",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{66,{

        .entityType = 208,
        .instance = 17,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core16",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{69,{

        .entityType = 208,
        .instance = 18,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core17",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{72,{

        .entityType = 208,
        .instance = 19,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core18",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{75,{

        .entityType = 208,
        .instance = 20,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core19",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{78,{

        .entityType = 208,
        .instance = 21,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core20",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{81,{

        .entityType = 208,
        .instance = 22,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core21",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{84,{

        .entityType = 208,
        .instance = 23,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core22",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{87,{

        .entityType = 208,
        .instance = 24,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0/core23",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{90,{

        .entityType = 3,
        .instance = 1,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu0",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::NONE,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{92,{

        .entityType = 208,
        .instance = 25,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core0",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{95,{

        .entityType = 208,
        .instance = 26,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core1",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{98,{

        .entityType = 208,
        .instance = 27,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core2",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{101,{

        .entityType = 208,
        .instance = 28,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core3",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{104,{

        .entityType = 208,
        .instance = 29,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core4",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{107,{

        .entityType = 208,
        .instance = 30,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core5",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{110,{

        .entityType = 208,
        .instance = 31,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core6",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{113,{

        .entityType = 208,
        .instance = 32,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core7",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{116,{

        .entityType = 208,
        .instance = 33,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core8",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{119,{

        .entityType = 208,
        .instance = 34,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core9",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{122,{

        .entityType = 208,
        .instance = 35,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core10",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{125,{

        .entityType = 208,
        .instance = 36,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core11",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{128,{

        .entityType = 208,
        .instance = 37,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core12",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{131,{

        .entityType = 208,
        .instance = 38,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core13",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{134,{

        .entityType = 208,
        .instance = 39,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core14",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{137,{

        .entityType = 208,
        .instance = 40,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core15",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{140,{

        .entityType = 208,
        .instance = 41,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core16",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{143,{

        .entityType = 208,
        .instance = 42,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core17",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{146,{

        .entityType = 208,
        .instance = 43,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core18",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{149,{

        .entityType = 208,
        .instance = 44,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core19",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{152,{

        .entityType = 208,
        .instance = 45,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core20",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{155,{

        .entityType = 208,
        .instance = 46,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core21",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{158,{

        .entityType = 208,
        .instance = 47,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core22",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
{161,{

        .entityType = 208,
        .instance = 48,
        .sensorType = 7,
        .sensorPath = "/system/chassis/motherboard/cpu1/core23",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 111,
        .coefficientM = 1,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = false,
        .scale = 0,
        .sensorUnits1 = 0,
        .unit = "",
        .updateFunc = notify::assertion,
        .getFunc = inventory::get::assertion,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameParentLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                                false,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::DEASSERT,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
// {164,{

//         .entityType = 3,
//         .instance = 2,
//         .sensorType = 7,
//         .sensorPath = "/system/chassis/motherboard/cpu1",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 7,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 8,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 7,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {166,{

//         .entityType = 32,
//         .instance = 1,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm0",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {168,{

//         .entityType = 32,
//         .instance = 2,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm1",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {170,{

//         .entityType = 32,
//         .instance = 3,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm2",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {172,{

//         .entityType = 32,
//         .instance = 4,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm3",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {174,{

//         .entityType = 32,
//         .instance = 5,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm4",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {176,{

//         .entityType = 32,
//         .instance = 6,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm5",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {178,{

//         .entityType = 32,
//         .instance = 7,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm6",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {180,{

//         .entityType = 32,
//         .instance = 8,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm7",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {182,{

//         .entityType = 32,
//         .instance = 9,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm8",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {184,{

//         .entityType = 32,
//         .instance = 10,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm9",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {186,{

//         .entityType = 32,
//         .instance = 11,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm10",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {188,{

//         .entityType = 32,
//         .instance = 12,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm11",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {190,{

//         .entityType = 32,
//         .instance = 13,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm12",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {192,{

//         .entityType = 32,
//         .instance = 14,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm13",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {194,{

//         .entityType = 32,
//         .instance = 15,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm14",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {196,{

//         .entityType = 32,
//         .instance = 16,
//         .sensorType = 12,
//         .sensorPath = "/system/chassis/motherboard/dimm15",
//         .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = notify::assertion,
//         .getFunc = inventory::get::assertion,
//         .mutability = Mutability(Mutability::Write|Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameLeaf,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
//                     {"Functional",{
//                     {
//                         { 6,{
//                                 true,
//                                 false,
//                             }
//                         },
//                     },
//                     {
//                         { 4,{
//                                 SkipAssertion::NONE,
//                             false,
//                             true,
//                             }
//                         },
//                     }}},
//             }},
//             {"xyz.openbmc_project.Inventory.Item",{
//                     {"Present",{
//                     {
//                     },
//                     {
//                         { 6,{
//                                 SkipAssertion::NONE,
//                             true,
//                             false,
//                             }
//                         },
//                     }}},
//             }},
//      },
// }},
// {216,{

//         .entityType = 21,
//         .instance = 1,
//         .sensorType = 200,
//         .sensorPath = "/xyz/openbmc_project/control/power_supply_attributes",
//         .sensorInterface = "xyz.openbmc_project.Control.PowerSupplyAttributes",
//         .sensorReadingType = 111,
//         .coefficientM = 1,
//         .coefficientB = 0,
//         .exponentB = 0,
//         .scaledOffset = 0,
//         .exponentR = 0,
//         .hasScale = false,
//         .scale = 0,
//         .sensorUnits1 = 0,
//         .unit = "",
//         .updateFunc = set::assertion,
//         .getFunc = get::assertion,
//         .mutability = Mutability(Mutability::Read),
//         .sensorName = "",
//         .sensorNameFunc = get::nameProperty,
//         .propertyInterfaces = {
//             {"xyz.openbmc_project.Control.PowerSupplyAttributes",{
//                     {"DeratingFactor",{
//                     {
//                     },
//                     {
//                         { 255,{
//                                 }},
//                     }}},
//             }},
//      },
// }},
};

} // namespace sensor
} // namespace ipmi
