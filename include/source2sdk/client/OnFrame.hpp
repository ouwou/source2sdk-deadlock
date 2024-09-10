#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class OnFrame : std::uint8_t
    {
        ONFRAME_UNKNOWN = 0,
        ONFRAME_TRUE = 1,
        ONFRAME_FALSE = 2,
    };
};
