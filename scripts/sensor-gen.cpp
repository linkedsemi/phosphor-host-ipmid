// !!! WARNING: This is a GENERATED Code..Please do NOT Edit !!!

#include "sensordatahandler.hpp"

#include <ipmid/types.hpp>

namespace ipmi {
namespace sensor {

extern const IdInfoMap __attribute__((init_priority(101))) sensors = {
{96,{

        .entityType = 0,
        .instance = 0,
        .sensorType = 7,
        .sensorPath = "/org/open_power/control/occ0",
        .sensorInterface = "org.open_power.OCC.Status",
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
        .sensorNameFunc = get::nameLeaf,
        .propertyInterfaces = {
            {"org.open_power.OCC.Status",{
                    {"OccActive",{
                    {
                    },
                    {
                        { 6,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
     },
}},
{97,{

        .entityType = 0,
        .instance = 0,
        .sensorType = 4,
        .sensorPath = "/system/chassis/motherboard/dimm1",
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
                        { 4,{
                                false,
                                true,
                            }
                        },
                    },
                    {
                        { 6,{
                                SkipAssertion::NONE,
                            true,
                            false,
                            }
                        },
                    }}},
            }},
            {"xyz.openbmc_project.Inventory.Item",{
                    {"Present",{
                    {
                    },
                    {
                        { 4,{
                                SkipAssertion::NONE,
                            false,
                            true,
                            }
                        },
                    }}},
            }},
     },
}},
{99,{

        .entityType = 0,
        .instance = 0,
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
        .updateFunc = set::readingAssertion<uint32_t>,
        .getFunc = get::readingAssertion<uint32_t>,
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
{98,{

        .entityType = 0,
        .instance = 0,
        .sensorType = 195,
        .sensorPath = "/xyz/openbmc_project/state/host1",
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
        .updateFunc = set::readingAssertion<uint32_t>,
        .getFunc = get::readingAssertion<uint32_t>,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "RebootAttempts",
        .sensorNameFunc = nullptr,
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
{208,{

        .entityType = 0,
        .instance = 0,
        .sensorType = 1,
        .sensorPath = "/xyz/openbmc_project/sensors/temperature/fleeting0",
        .sensorInterface = "xyz.openbmc_project.Sensor.Value",
        .sensorReadingType = 1,
        .coefficientM = 511,
        .coefficientB = 0,
        .exponentB = 0,
        .scaledOffset = 0,
        .exponentR = 0,
        .hasScale = true,
        .scale = -3,
        .sensorUnits1 = 128,
        .unit = "",
        .updateFunc = set::readingData<int64_t>,
        .getFunc = get::readingData<int64_t>,
        .mutability = Mutability(Mutability::Write|Mutability::Read),
        .sensorName = "",
        .sensorNameFunc = get::nameLeaf,
        .propertyInterfaces = {
            {"xyz.openbmc_project.Sensor.Value",{
                    {"Value",{
                    {
                    },
                    {
                        { 255,{
                                }},
                    }}},
            }},
     },
}},
{84,{

        .entityType = 0,
        .instance = 0,
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
{197,{

        .entityType = 0,
        .instance = 0,
        .sensorType = 23,
        .sensorPath = "/system/chassis/motherboard/gv100card0",
        .sensorInterface = "xyz.openbmc_project.Inventory.Manager",
        .sensorReadingType = 1,
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
            {"xyz.openbmc_project.Inventory.Decorator.Replaceable",{
                    {"FieldReplaceable",{
                    {
                    },
                    {
                        { 7,{
                                SkipAssertion::NONE,
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
            {"xyz.openbmc_project.Inventory.Item.Accelerator",{
            }},
            {"xyz.openbmc_project.State.Decorator.OperationalStatus",{
                    {"Functional",{
                    {
                        { 7,{
                                true,
                            }
                        },
                    },
                    {
                        { 8,{
                                SkipAssertion::NONE,
                            false,
                            }
                        },
                    }}},
            }},
     },
}},
};

} // namespace sensor
} // namespace ipmi
