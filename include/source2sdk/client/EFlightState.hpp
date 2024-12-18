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
    enum class EFlightState : std::uint8_t
    {
        None = 0,
        Boosting = 1,
        Flying = 2,
    };
};
