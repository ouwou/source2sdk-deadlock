#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class CDebugOverlayFilterType_t : std::uint32_t
    {
        NONE = 0x0,
        TEXT = 0x1,
        ENTITY = 0x2,
        COUNT = 0x3,
        TACTICAL_SEARCH = 0x4,
        COMBINED = 0xffffffff,
    };
};
