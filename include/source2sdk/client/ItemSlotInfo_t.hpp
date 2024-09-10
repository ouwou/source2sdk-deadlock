#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x28
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ItemSlotInfo_t
    {
    public:
        int32_t m_arMaxPurchasesForTier[5]; // 0x0        
        float m_arPriceAdjustPercentForTier[5]; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ItemSlotInfo_t, m_arMaxPurchasesForTier) == 0x0);
    static_assert(offsetof(ItemSlotInfo_t, m_arPriceAdjustPercentForTier) == 0x14);
    
    static_assert(sizeof(ItemSlotInfo_t) == 0x28);
};
