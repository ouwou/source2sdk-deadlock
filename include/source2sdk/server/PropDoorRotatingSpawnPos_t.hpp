#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PropDoorRotatingSpawnPos_t : std::uint32_t
    {
        DOOR_SPAWN_CLOSED = 0x0,
        DOOR_SPAWN_OPEN_FORWARD = 0x1,
        DOOR_SPAWN_OPEN_BACK = 0x2,
        DOOR_SPAWN_AJAR = 0x3,
    };
};
