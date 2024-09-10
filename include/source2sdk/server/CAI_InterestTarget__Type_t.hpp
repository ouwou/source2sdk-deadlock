#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class CAI_InterestTarget__Type_t : std::uint32_t
    {
        eDisabled = 0x0,
        eEntity = 0x1,
        ePosition = 0x2,
        eDirection = 0x3,
    };
};
