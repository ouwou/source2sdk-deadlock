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
    enum class ETier3State_t : std::uint32_t
    {
        ETier3State_Alive = 0x0,
        ETier3State_Dying = 0x1,
        ETier3State_Falling = 0x2,
        ETier3Staet_Vulnerable = 0x3,
    };
};
