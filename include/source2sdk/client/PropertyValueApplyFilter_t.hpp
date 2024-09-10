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
    enum class PropertyValueApplyFilter_t : std::uint32_t
    {
        EApplyFilter_None = 0x0,
        EApplyFilter_OnlyIfImbued = 0x1,
        EApplyFilter_OnlyIfNonImbued = 0x2,
        EApplyFilter_OnlyIfHasCharges = 0x3,
    };
};
