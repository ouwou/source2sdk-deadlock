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
    enum class EHUDElementButtonHintLocType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Ability Cast"
        EButtonHintLocType_Cast = 0x0,
        // MPropertyFriendlyName "Ability Alt-Cast"
        EButtonHintLocType_AltCast = 0x1,
        // MPropertyFriendlyName "Custom"
        EButtonHintLocType_Custom = 0x2,
    };
};
