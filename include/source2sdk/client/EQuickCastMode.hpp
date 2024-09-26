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
    enum class EQuickCastMode : std::uint32_t
    {
        EQuickCast_Default = 0x0,
        EQuickCast_Enabled = 0x1,
        EQuickCast_Disable = 0x2,
        EQuickMaxValue = 0x2,
    };
};
