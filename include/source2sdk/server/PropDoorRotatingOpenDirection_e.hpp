#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class PropDoorRotatingOpenDirection_e : std::uint32_t
    {
        DOOR_ROTATING_OPEN_BOTH_WAYS = 0x0,
        DOOR_ROTATING_OPEN_FORWARD = 0x1,
        DOOR_ROTATING_OPEN_BACKWARD = 0x2,
    };
};
