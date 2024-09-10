#pragma once
#include "source2sdk/client/BonusUpgrade_t.hpp"
#include "source2sdk/client/ECurrencyType.hpp"
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
    // Size: 0x50
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HeroLevel_t
    {
    public:
        uint32_t m_unRequiredGold; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_mapBonusCurrencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::ECurrencyType,int32_t> m_mapBonusCurrencies;
        char m_mapBonusCurrencies[0x28]; // 0x8        
        bool m_bUseStandardUpgrade; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x7]; // 0x31
        // m_vecBonusUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::BonusUpgrade_t> m_vecBonusUpgrades;
        char m_vecBonusUpgrades[0x18]; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroLevel_t, m_unRequiredGold) == 0x0);
    static_assert(offsetof(HeroLevel_t, m_mapBonusCurrencies) == 0x8);
    static_assert(offsetof(HeroLevel_t, m_bUseStandardUpgrade) == 0x30);
    static_assert(offsetof(HeroLevel_t, m_vecBonusUpgrades) == 0x38);
    
    static_assert(sizeof(HeroLevel_t) == 0x50);
};
