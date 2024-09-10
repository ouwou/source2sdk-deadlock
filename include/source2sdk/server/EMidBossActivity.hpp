#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EMidBossActivity : std::uint32_t
    {
        IdleShielded = 0x0,
        Alert = 0x1,
        AlertShooting = 0x2,
        Dying = 0x3,
    };
};
