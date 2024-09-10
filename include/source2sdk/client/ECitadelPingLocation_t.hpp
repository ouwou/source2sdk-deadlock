#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelPingLocation_t : std::uint32_t
    {
        CITADEL_PING_LOCATION_NONE = 0x0,
        CITADEL_PING_LOCATION_ON_ROOF = 0x1,
        CITADEL_PING_LOCATION_ON_BRIDGE = 0x2,
        CITADEL_PING_LOCATION_TOP_OF_MID = 0x3,
        CITADEL_PING_LOCATION_IN_MID = 0x4,
        CITADEL_PING_LOCATION_TOP_OF_GARAGE = 0x5,
        CITADEL_PING_LOCATION_UNDER_GARAGE = 0x6,
    };
};
