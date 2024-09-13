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
    enum class ENeutralTrooperType : std::uint32_t
    {
        NEUTRAL_TROOPER_WEAK = 0x1,
        NEUTRAL_TROOPER_NORMAL = 0x2,
        NEUTRAL_TROOPER_STRONG = 0x3,
        NEUTRAL_SUPER = 0x5,
        NEUTRAL_SINNERS_SACRIFICE = 0x6,
        NEUTRAL_GARGOYLE = 0x9,
        NEUTRAL_TRASHBUG = 0xa,
        NEUTRAL_WHACK_A_GHOST = 0xb,
        NEUTRAL_VAULT = 0xc,
        NEUTRAL_SUPER_HEROTEST = 0xd,
    };
};
