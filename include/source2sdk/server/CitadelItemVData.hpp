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
    // Size: 0x15b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CitadelItemVData : public server::CitadelAbilityVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1568[0x4]; // 0x1568
        client::EModTier_t m_iItemTier; // 0x156c        
        int8_t m_nUpgradeSlotCost; // 0x156d        
        bool m_bWarnIfNoAffectedAbilities; // 0x156e        
        bool m_bRequiresChargedAbility; // 0x156f        
        bool m_bRequiresChanelledAbility; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1571[0x7]; // 0x1571
        // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecComponentItems;
        char m_vecComponentItems[0x18]; // 0x1578        
        bool m_bShowTextDescription; // 0x1590        
        bool m_bIsDefensiveItem; // 0x1591        
        client::EShopFilters_t m_eShopFilters; // 0x1592        
        [[maybe_unused]] std::uint8_t pad_0x1594[0x4]; // 0x1594
        // metadata: MPropertyFriendlyName "Item Tooltips"
        // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
        char m_vecTooltipSectionInfo[0x18]; // 0x1598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
    static_assert(sizeof(CitadelItemVData) == 0x15b0);
};
