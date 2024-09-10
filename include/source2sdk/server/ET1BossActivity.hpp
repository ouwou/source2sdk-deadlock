#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class ET1BossActivity : std::uint32_t
    {
        IdleShielded = 0x0,
        Stunned = 0x1,
        Disarmed = 0x2,
        Alert = 0x3,
        RangeAttack = 0x4,
        MeleeAttack = 0x5,
        Dying = 0x6,
    };
};
