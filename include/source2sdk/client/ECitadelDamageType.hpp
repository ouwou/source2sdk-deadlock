#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelDamageType : std::uint32_t
    {
        CITADEL_DAMAGETYPE_NONE = 0x0,
        CITADEL_DAMAGETYPE_BULLET = 0x1,
        CITADEL_DAMAGETYPE_ABILITY = 0x2,
        CITADEL_DAMAGETYPE_MELEE = 0x3,
        CITADEL_DAMAGETYPE_ENVIRONMENTAL = 0x4,
        CITADEL_DAMAGETYPE_POISON = 0x5,
        CITADEL_DAMAGETYPE_WEAKPOINT_BONUS = 0x6,
    };
};
