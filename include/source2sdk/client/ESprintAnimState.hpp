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
    enum class ESprintAnimState : std::uint32_t
    {
        // MAlternateSemanticName
        IN_COMBAT_RUN = 0x0,
        // MAlternateSemanticName
        OUT_OF_COMBAT_RUN = 0x1,
        // MAlternateSemanticName
        OUT_OF_COMBAT_SPRINT = 0x2,
    };
};
