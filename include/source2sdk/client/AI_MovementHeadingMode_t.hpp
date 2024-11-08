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
    enum class AI_MovementHeadingMode_t : std::uint32_t
    {
        eContinuous = 0x0,
        eDiscretized_180 = 0x1,
        eDiscretized_90 = 0x2,
        eDiscretized_45 = 0x3,
    };
};
