#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_TechUpgrade_SuperAcolyteGloves : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb10[0x38]; // 0xb10
        float fl_StoredDamage; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_TechUpgrade_SuperAcolyteGloves because it is not a standard-layout class
    static_assert(sizeof(CCitadel_TechUpgrade_SuperAcolyteGloves) == 0xb50);
};
