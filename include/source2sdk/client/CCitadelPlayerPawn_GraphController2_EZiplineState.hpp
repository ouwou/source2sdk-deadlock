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
    enum class CCitadelPlayerPawn_GraphController2_EZiplineState : std::uint32_t
    {
        // MAlternateSemanticName
        EZiplineState_NOZIPLINE = 0x0,
        // MAlternateSemanticName
        ESelectedAbility_AWAITINGTETHER = 0x1,
        // MAlternateSemanticName
        ESelectedAbility_LATCHEDANDREELING = 0x2,
        // MAlternateSemanticName
        ESelectedAbility_ATTACHEDTOZIPLINE = 0x3,
    };
};
