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
    enum class EProfileCardSlotType : std::uint32_t
    {
        k_EProfileCardSlotType_Empty = 0x0,
        k_EProfileCardSlotType_Stat = 0x1,
        k_EProfileCardSlotType_Hero = 0x2,
    };
};
