#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"
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
    // Size: 0x1570
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CitadelItemVData : public client::CitadelAbilityVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1528[0x4]; // 0x1528
        client::EModTier_t m_iItemTier; // 0x152c        
        int8_t m_nUpgradeSlotCost; // 0x152d        
        bool m_bWarnIfNoAffectedAbilities; // 0x152e        
        bool m_bRequiresChargedAbility; // 0x152f        
        bool m_bRequiresChanelledAbility; // 0x1530        
        [[maybe_unused]] std::uint8_t pad_0x1531[0x7]; // 0x1531
        // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecComponentItems;
        char m_vecComponentItems[0x18]; // 0x1538        
        bool m_bShowTextDescription; // 0x1550        
        bool m_bIsDefensiveItem; // 0x1551        
        client::EShopFilters_t m_eShopFilters; // 0x1552        
        [[maybe_unused]] std::uint8_t pad_0x1554[0x4]; // 0x1554
        // metadata: MPropertyFriendlyName "Item Tooltips"
        // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
        char m_vecTooltipSectionInfo[0x18]; // 0x1558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
    
    static_assert(sizeof(CitadelItemVData) == 0x1570);
};
