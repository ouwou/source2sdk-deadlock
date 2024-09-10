#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class ELeapState_t : std::uint8_t
    {
        ELeapState_None = 0,
        ELeapState_Startup = 1,
        ELeapState_BoostingUp = 2,
        ELeapState_CrashingDown = 3,
        ELeapState_Land = 4,
    };
};
