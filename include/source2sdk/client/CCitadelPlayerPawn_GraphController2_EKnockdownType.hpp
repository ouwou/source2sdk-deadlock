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
    enum class CCitadelPlayerPawn_GraphController2_EKnockdownType : std::uint32_t
    {
        // MAlternateSemanticName
        EKnockdownType_NONE = 0x0,
        // MAlternateSemanticName
        EKnockdownType_LARGE = 0x1,
        // MAlternateSemanticName
        EKnockdownType_MEDIUM = 0x2,
        // MAlternateSemanticName
        EKnockdownType_SMALL = 0x3,
        // MAlternateSemanticName
        ERopeClimb_PARRIED = 0x4,
    };
};
