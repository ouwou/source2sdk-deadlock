#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_TechUpgrade_SuperAcolyteGloves : public client::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcb0[0x38]; // 0xcb0
        float fl_StoredDamage; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_TechUpgrade_SuperAcolyteGloves because it is not a standard-layout class
    static_assert(sizeof(CCitadel_TechUpgrade_SuperAcolyteGloves) == 0xcf0);
};
