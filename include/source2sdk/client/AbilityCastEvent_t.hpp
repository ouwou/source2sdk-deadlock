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
    enum class AbilityCastEvent_t : std::uint32_t
    {
        CAST_DELAY_STARTED = 0x0,
        CAST_COMPLETED = 0x1,
        CAST_TOGGLED_ON = 0x2,
        CAST_CHANNEL_STARTED = 0x3,
    };
};
