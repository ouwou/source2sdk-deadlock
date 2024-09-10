#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 15
    // Alignment: 4
    // Size: 0x4
    enum class WaypointFlags_t : std::uint32_t
    {
        // MEnumeratorIsNotAFlag
        WP_NONE = 0x0,
        WP_TO_DETOUR = 0x1,
        WP_TO_PATHCORNER = 0x2,
        WP_TO_NODE = 0x4,
        WP_TO_GOAL = 0x8,
        WP_TO_DOOR = 0x10,
        WP_DONT_SIMPLIFY = 0x20,
        WP_INTERRUPTED_STOP = 0x40,
        WP_FROM_NAVMESH = 0x80,
        WP_FROM_NAVSPACE = 0x100,
        WP_LOCAL_PATH = 0x200,
        WP_RETURN_PATH = 0x400,
        WP_GOAL_FROM_BLOCKED = 0x800,
        WP_PLACED_ON_GROUND = 0x1000,
        WP_PATH_INCOMPLETE_FROM_PROCESSING = 0x2000,
    };
};
