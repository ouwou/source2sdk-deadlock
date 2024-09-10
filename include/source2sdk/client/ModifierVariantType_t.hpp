#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class ModifierVariantType_t : std::uint32_t
    {
        Variant_Null = 0x0,
        Variant_Bool = 0x1,
        Variant_Float = 0x2,
        Variant_String = 0x3,
        Variant_Entity = 0x4,
        Variant_Vector = 0x5,
        Variant_Quaternion = 0x6,
        Variant_StructPtr = 0x7,
    };
};
