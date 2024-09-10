#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class EAbilityTargetingLocation_t : std::uint32_t
    {
        CITADEL_ABILITY_TARGETING_LOCATION_NONE = 0x0,
        CITADEL_ABILITY_TARGETING_LOCATION_SELF = 0x1,
        CITADEL_ABILITY_TARGETING_LOCATION_UNIT = 0x2,
        CITADEL_ABILITY_TARGETING_LOCATION_GROUND = 0x3,
        CITADEL_ABILITY_TARGETING_LOCATION_FIXED_RANGE_GROUND = 0x4,
        CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_GROUND = 0x5,
        CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_UNIT = 0x6,
        // MPropertySuppressEnumerator
        CITADEL_ABILITY_TARGETING_LOCATION_COUNT = 0x7,
    };
};
