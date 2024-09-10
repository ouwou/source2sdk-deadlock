#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelTeamObjective : std::uint32_t
    {
        k_eCitadelTeamObjective_Core = 0x0,
        k_eCitadelTeamObjective_Tier1_Lane1 = 0x1,
        k_eCitadelTeamObjective_Tier1_Lane2 = 0x2,
        k_eCitadelTeamObjective_Tier1_Lane3 = 0x3,
        k_eCitadelTeamObjective_Tier1_Lane4 = 0x4,
        k_eCitadelTeamObjective_Tier2_Lane1 = 0x5,
        k_eCitadelTeamObjective_Tier2_Lane2 = 0x6,
        k_eCitadelTeamObjective_Tier2_Lane3 = 0x7,
        k_eCitadelTeamObjective_Tier2_Lane4 = 0x8,
        k_eCitadelTeamObjective_Titan = 0x9,
        k_eCitadelTeamObjective_TitanShieldGenerator_1 = 0xa,
        k_eCitadelTeamObjective_TitanShieldGenerator_2 = 0xb,
        k_eCitadelTeamObjective_BarrackBoss_Lane1 = 0xc,
        k_eCitadelTeamObjective_BarrackBoss_Lane2 = 0xd,
        k_eCitadelTeamObjective_BarrackBoss_Lane3 = 0xe,
        k_eCitadelTeamObjective_BarrackBoss_Lane4 = 0xf,
    };
};
