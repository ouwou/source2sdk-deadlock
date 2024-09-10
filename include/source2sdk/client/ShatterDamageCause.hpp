#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class ShatterDamageCause : std::uint8_t
    {
        SHATTERDAMAGE_BULLET = 0,
        SHATTERDAMAGE_MELEE = 1,
        SHATTERDAMAGE_THROWN = 2,
        SHATTERDAMAGE_SCRIPT = 3,
        SHATTERDAMAGE_EXPLOSIVE = 4,
    };
};
