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
    enum class EAbilityInterruptType : std::uint32_t
    {
        EAbilityInterruptNone = 0x0,
        EAbilityInterruptCancel = 0x1,
        EAbilityInterruptExternal = 0x2,
    };
};
