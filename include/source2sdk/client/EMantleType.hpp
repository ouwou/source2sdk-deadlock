#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EMantleType : std::uint32_t
    {
        // MAlternateSemanticName
        EMantleNone = 0x0,
        // MAlternateSemanticName
        EMantle32 = 0x1,
        // MAlternateSemanticName
        EMantle64 = 0x2,
        // MAlternateSemanticName
        EMantle96 = 0x3,
        // MAlternateSemanticName
        EMantle128 = 0x4,
    };
};
