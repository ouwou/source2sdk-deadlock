#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelClientMessages : std::uint32_t
    {
        CITADEL_CM_MapPing = 0x3ea,
        CITADEL_CM_PerformanceStats = 0x3eb,
        CITADEL_CM_PingWheel = 0x3ec,
        CITADEL_CM_ChatMsg = 0x3ed,
        CITADEL_CM_PerfReport = 0x3ee,
        CITADEL_CM_QuickResponse = 0x3ef,
        CITADEL_CM_Pause = 0x3f0,
        CITADEL_CM_MapLine = 0x3f1,
        CITADEL_CM_AbilityPing = 0x3f2,
        CITADEL_CM_ExecuteMapUnitAbility = 0x3f3,
        CITADEL_CM_GetDamageStats = 0x3f4,
    };
};
