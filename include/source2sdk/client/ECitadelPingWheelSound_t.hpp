#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelPingWheelSound_t : std::uint32_t
    {
        CITADEL_PING_WHEEL_SOUND_NONE = 0x0,
        CITADEL_PING_WHEEL_SOUND_MAP_PING = 0x1,
        CITADEL_PING_WHEEL_SOUND_ATTACK = 0x2,
        CITADEL_PING_WHEEL_SOUND_DEFEND = 0x3,
        CITADEL_PING_WHEEL_SOUND_WARNING = 0x4,
    };
};
