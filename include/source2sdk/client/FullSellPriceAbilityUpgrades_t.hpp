#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x10
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FullSellPriceAbilityUpgrades_t
    {
    public:
        CUtlString m_strAbilityUpgrade; // 0x0        
        entity2::GameTime_t m_unGameTimePurchased; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FullSellPriceAbilityUpgrades_t, m_strAbilityUpgrade) == 0x0);
    static_assert(offsetof(FullSellPriceAbilityUpgrades_t, m_unGameTimePurchased) == 0x8);
    
    static_assert(sizeof(FullSellPriceAbilityUpgrades_t) == 0x10);
};
