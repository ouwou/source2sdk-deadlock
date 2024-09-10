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
    enum class ECitadelAbilityHUDElementType_t : std::uint32_t
    {
        CITADEL_ABILITY_HUD_ELEMENT_TYPE_GUN = 0x0,
        CITADEL_ABILITY_HUD_ELEMENT_TYPE_UNIT_TARGET = 0x1,
        CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS = 0x2,
        CITADEL_ABILITY_HUD_ELEMENT_TYPE_HIDDEN = 0x3,
    };
};
