#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ModifierOverheadDrawType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Never"
        OVERHEAD_DRAW_NEVER = 0x0,
        // MPropertyFriendlyName "For Everyone"
        OVERHEAD_DRAW_FOR_EVERYONE = 0x1,
        // MPropertyFriendlyName "For Caster Only"
        OVERHEAD_DRAW_FOR_CASTER_ONLY = 0x2,
        // MPropertyFriendlyName "For Caster Team Only"
        OVERHEAD_DRAW_FOR_CASTER_TEAM_ONLY = 0x3,
        // MPropertyFriendlyName "For Parent Team Only"
        OVERHEAD_DRAW_FOR_PARENT_TEAM_ONLY = 0x4,
        // MPropertyFriendlyName "For All Owners of Applying Ability"
        OVERHEAD_DRAW_OWNERS_OF_APPLYING_ABILITY = 0x5,
    };
};
