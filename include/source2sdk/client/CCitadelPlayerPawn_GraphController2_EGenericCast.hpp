#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class CCitadelPlayerPawn_GraphController2_EGenericCast : std::uint32_t
    {
        // MAlternateSemanticName
        EGenericCast_COMPLETED = 0x0,
        // MAlternateSemanticName
        EGenericCast_CASTING = 0x1,
        // MAlternateSemanticName
        EGenericCast_CHANNELING = 0x2,
        // MAlternateSemanticName
        EGenericCast_EXECUTED = 0x3,
        // MAlternateSemanticName
        EGenericCast_INTERRUPTED = 0x4,
        // MAlternateSemanticName
        EGenericCast_TOGGLED_ON = 0x5,
        // MAlternateSemanticName
        EGenericCast_TOGGLED_OFF = 0x6,
    };
};
