#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class CMsgLaneColor : std::uint32_t
    {
        k_ELaneColor_Invalid = 0x0,
        k_ELaneColor_Yellow = 0x1,
        k_ELaneColor_Green = 0x3,
        k_ELaneColor_Blue = 0x4,
        k_ELaneColor_Purple = 0x6,
    };
};
