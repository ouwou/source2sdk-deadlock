#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class eAuraShapeType : std::uint32_t
    {
        // MPropertyFriendlyName "Sphere"
        k_eAuraShapeTypeSphere = 0x0,
        // MPropertyFriendlyName "Entity Based"
        k_eAuraShapeTypeEntityBased = 0x1,
    };
};
