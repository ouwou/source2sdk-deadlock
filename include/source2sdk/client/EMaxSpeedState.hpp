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
    enum class EMaxSpeedState : std::uint32_t
    {
        // MAlternateSemanticName
        NORMAL = 0x0,
        // MAlternateSemanticName
        SLOWED = 0x1,
        // MAlternateSemanticName
        BUFFED = 0x2,
    };
};
