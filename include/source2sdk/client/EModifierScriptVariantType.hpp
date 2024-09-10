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
    enum class EModifierScriptVariantType : std::uint32_t
    {
        // MPropertyFriendlyName "Float"
        MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT = 0x0,
        // MPropertyFriendlyName "Model"
        MODIFIER_SCRIPT_VARIANT_MODEL = 0x1,
        // MPropertyFriendlyName "Particle"
        MODIFIER_SCRIPT_VARIANT_PARTICLE = 0x2,
    };
};
