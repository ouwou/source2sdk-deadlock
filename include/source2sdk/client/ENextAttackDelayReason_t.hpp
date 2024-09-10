#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class ENextAttackDelayReason_t : std::uint32_t
    {
        EDelayReason_Reload = 0x0,
        EDelayReason_BebopSpinUp = 0x1,
        EDelayReason_ViscousChargeShotRecovery = 0x2,
        EDelayReason_WraithSpinUp = 0x3,
        EDelayReason_Disarmed = 0x4,
        EDelayReasonCount = 0x5,
    };
};
