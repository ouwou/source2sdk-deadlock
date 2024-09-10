#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class UnreachableTargetType_t : std::uint32_t
    {
        UTT_ENTITY = 0x0,
        UTT_WORLDPOS = 0x1,
        UTT_GLOBALSYMBOL = 0x2,
    };
};
