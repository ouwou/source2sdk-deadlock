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
    enum class EAltCastMode : std::uint32_t
    {
        EAltCast_PressAndHold = 0x0,
        EAltCast_DoubleTap = 0x1,
        EAltCast_ModifierKey = 0x2,
        EAltCastMaxValue = 0x2,
    };
};
