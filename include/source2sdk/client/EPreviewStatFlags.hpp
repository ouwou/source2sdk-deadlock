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
    enum class EPreviewStatFlags : std::uint32_t
    {
        EPreviewFlag_None = 0x0,
        EPreviewFlag_WithPreviewItem = 0x1,
        EPreviewFlag_WithTierBonuses = 0x2,
        EPreviewFlag_WithPreviewItemConditionals = 0x4,
        EPreviewFlag_OnlyTierBonuses = 0x8,
    };
};
