#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 10
    // Alignment: 4
    // Size: 0x4
    enum class EAbilityActivation_t : std::uint32_t
    {
        CITADEL_ABILITY_ACTIVATION_NONE = 0x0,
        CITADEL_ABILITY_ACTIVATION_PASSIVE = 0x1,
        CITADEL_ABILITY_ACTIVATION_INSTANT_CAST = 0x2,
        CITADEL_ABILITY_ACTIVATION_PRESS = 0x3,
        CITADEL_ABILITY_ACTIVATION_PRESS_TOGGLE = 0x4,
        CITADEL_ABILITY_ACTIVATION_HOLD_TOGGLE = 0x5,
        CITADEL_ABILITY_ACTIVATION_ON_BUTTON_RELEASE = 0x6,
        CITADEL_ABILITY_ACTIVATION_INSTANT_CAST_ON_BUTTON_RELEASE = 0x7,
        CITADEL_ABILITY_ACTIVATION_ON_BUTTON_IS_DOWN = 0x8,
        // MPropertySuppressEnumerator
        CITADEL_ABILITY_ACTIVATION_COUNT = 0x9,
    };
};
