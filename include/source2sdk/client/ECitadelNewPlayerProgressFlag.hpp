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
    enum class ECitadelNewPlayerProgressFlag : std::uint32_t
    {
        k_eNewPlayerProgress_GettingStarted = 0x1,
        k_eNewPlayerProgress_HeroTraining = 0x2,
        k_eNewPlayerProgress_LaneTraining = 0x3,
    };
};
