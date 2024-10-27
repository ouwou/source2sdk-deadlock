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
    enum class CCitadelPlayerPawn_GraphController2_ELaunchType : std::uint32_t
    {
        // MAlternateSemanticName
        ELaunchType_NONE = 0x0,
        // MAlternateSemanticName
        ELaunchType_JUMP = 0x1,
        // MAlternateSemanticName
        ELaunchType_FORCED = 0x2,
        // MAlternateSemanticName
        ELaunchType_CATAPULT = 0x3,
    };
};
