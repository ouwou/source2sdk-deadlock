#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class AI_Motor_MovementFacingMode_t : std::uint8_t
    {
        // MPropertySuppressEnumerator
        eInvalid = 0,
        eTarget = 1,
        ePath = 2,
    };
};
