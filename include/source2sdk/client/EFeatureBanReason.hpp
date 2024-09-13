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
    enum class EFeatureBanReason : std::uint32_t
    {
        k_eFeatureBanReason_Invalid = 0x0,
        k_eFeatureBanReason_DevCommand = 0x1,
        k_eFeatureBanReason_PlayerReports = 0x2,
        k_eFeatureBanReason_MatchAbandons = 0x3,
    };
};
