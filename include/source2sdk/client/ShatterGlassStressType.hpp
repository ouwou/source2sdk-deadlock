#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class ShatterGlassStressType : std::uint8_t
    {
        SHATTERGLASS_BLUNT = 0,
        SHATTERGLASS_BALLISTIC = 1,
        SHATTERGLASS_PULSE = 2,
        SHATTERGLASS_EXPLOSIVE = 3,
    };
};
