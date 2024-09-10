#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelTargetAbilityEffects : std::uint32_t
    {
        CITADEL_TARGET_ABILITY_BEHAVIOR_NONE = 0x0,
        CITADEL_TARGET_ABILITY_BEHAVIOR_IMBUE_MODIFIER_VALUE = 0x1,
        CITADEL_TARGET_ABILITY_BEHAVIOR_IMBUE_ACTIVE = 0x2,
    };
};
