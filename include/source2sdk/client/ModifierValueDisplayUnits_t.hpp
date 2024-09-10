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
    enum class ModifierValueDisplayUnits_t : std::uint32_t
    {
        EDisplayUnit_Normal = 0x0,
        EDisplayUnit_Meters = 0x1,
        EDisplayUnit_MetersPerSecond = 0x2,
        EDisplayUnit_Invert = 0x3,
    };
};
