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
    enum class CCitadelPlayerPawn_GraphController2_EMovementType : std::uint32_t
    {
        // MAlternateSemanticName
        EMovementType_NONE = 0x0,
        // MAlternateSemanticName
        EMovementType_FORCED = 0x1,
        // MAlternateSemanticName
        EMovementType_PLAYER_INPUT = 0x2,
    };
};
