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
    enum class EBannedFeature : std::uint32_t
    {
        k_eBannedFeature_Invalid = 0x0,
        k_eBannedFeature_LowPriorityMatchmaking = 0x1,
        k_eBannedFeature_CommsRestricted = 0x2,
    };
};
