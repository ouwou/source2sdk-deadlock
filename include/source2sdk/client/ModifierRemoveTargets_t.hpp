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
    enum class ModifierRemoveTargets_t : std::uint32_t
    {
        MODIFIER_REMOVE_ALL = 0x0,
        MODIFIER_REMOVE_ENEMY = 0x1,
        MODIFIER_REMOVE_ALLY = 0x2,
        MODIFIER_REMOVE_INTRINSIC = 0x3,
    };
};
