#pragma once
#include "source2sdk/client/EModifierValue.hpp"
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
    // Standard-layout class: true
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HeroPurchaseBonus_t
    {
    public:
        int32_t m_nTier; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_strValue; // 0x8        
        client::EModifierValue m_ValueType; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroPurchaseBonus_t, m_nTier) == 0x0);
    static_assert(offsetof(HeroPurchaseBonus_t, m_strValue) == 0x8);
    static_assert(offsetof(HeroPurchaseBonus_t, m_ValueType) == 0x10);
    
    static_assert(sizeof(HeroPurchaseBonus_t) == 0x18);
};
