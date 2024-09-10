#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 1
    // Size: 0x1
    enum class SurroundingBoundsType_t : std::uint8_t
    {
        USE_OBB_COLLISION_BOUNDS = 0,
        USE_BEST_COLLISION_BOUNDS = 1,
        USE_HITBOXES = 2,
        USE_SPECIFIED_BOUNDS = 3,
        USE_GAME_CODE = 4,
        USE_ROTATION_EXPANDED_BOUNDS = 5,
        USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
        USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
        USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
        SURROUNDING_TYPE_BIT_COUNT = 3,
    };
};
