#pragma once
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1598
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CitadelItemVData : public server::CitadelAbilityVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1550[0x4]; // 0x1550
        client::EModTier_t m_iItemTier; // 0x1554        
        int8_t m_nUpgradeSlotCost; // 0x1555        
        bool m_bWarnIfNoAffectedAbilities; // 0x1556        
        bool m_bRequiresChargedAbility; // 0x1557        
        bool m_bRequiresChanelledAbility; // 0x1558        
        [[maybe_unused]] std::uint8_t pad_0x1559[0x7]; // 0x1559
        // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecComponentItems;
        char m_vecComponentItems[0x18]; // 0x1560        
        bool m_bShowTextDescription; // 0x1578        
        bool m_bIsDefensiveItem; // 0x1579        
        client::EShopFilters_t m_eShopFilters; // 0x157a        
        [[maybe_unused]] std::uint8_t pad_0x157c[0x4]; // 0x157c
        // metadata: MPropertyFriendlyName "Item Tooltips"
        // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
        char m_vecTooltipSectionInfo[0x18]; // 0x1580        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
    static_assert(sizeof(CitadelItemVData) == 0x1598);
};
