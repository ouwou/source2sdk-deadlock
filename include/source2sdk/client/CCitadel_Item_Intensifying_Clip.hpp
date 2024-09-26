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
    // Size: 0xcd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_Intensifying_Clip : public client::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc90[0x38]; // 0xc90
        float m_flSpinUpTime; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xccc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Intensifying_Clip because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Intensifying_Clip) == 0xcd0);
};
