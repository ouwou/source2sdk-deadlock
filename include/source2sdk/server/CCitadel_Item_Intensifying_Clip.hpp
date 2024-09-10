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
    // Size: 0xb38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_Intensifying_Clip : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x38]; // 0xaf8
        float m_flSpinUpTime; // 0xb30        
        [[maybe_unused]] std::uint8_t pad_0xb34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Intensifying_Clip because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Item_Intensifying_Clip) == 0xb38);
};
