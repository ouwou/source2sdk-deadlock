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
    enum class ECaptureTriggerType : std::uint32_t
    {
        ENoEffect = 0x0,
        EAmmoSpawn = 0x1,
        EHeal = 0x2,
    };
};
