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
    enum class AI_MovementHeadingSmoothingMode_t : std::uint32_t
    {
        eNone = 0x0,
        eSpring = 0x1,
        eConstant = 0x2,
    };
};
