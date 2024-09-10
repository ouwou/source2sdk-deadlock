#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class ET2BossActivity : std::uint32_t
    {
        IdleShielded = 0x0,
        Staggered = 0x1,
        Stunned = 0x2,
        Wander = 0x3,
        Shooting = 0x4,
        RocketBarrage = 0x5,
        ElectricBeamWindup = 0x6,
        ElectricBeamShoot = 0x7,
        Stomp = 0x8,
        Stomp_Left = 0x9,
        Stomp_Right = 0xa,
        Dying = 0xb,
    };
};
