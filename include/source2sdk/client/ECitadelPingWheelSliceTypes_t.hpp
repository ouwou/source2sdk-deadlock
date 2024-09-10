#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelPingWheelSliceTypes_t : std::uint32_t
    {
        CITADEL_PING_WHEEL_ONE_SLICE = 0x0,
        CITADEL_PING_WHEEL_TWO_SLICE = 0x1,
        CITADEL_PING_WHEEL_SUBNAV_ONE_SLICE = 0x2,
        CITADEL_PING_WHEEL_SUBNAV_TWO_SLICE = 0x3,
    };
};
