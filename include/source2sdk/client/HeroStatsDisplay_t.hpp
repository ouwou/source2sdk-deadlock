#pragma once
#include "source2sdk/client/EStatsType.hpp"
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
    // Size: 0x90
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HeroStatsDisplay_t
    {
    public:
        // metadata: MPropertyDescription "What stats do we want to show in the weapon header area?"
        // m_vecWeaponHeaderStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecWeaponHeaderStats;
        char m_vecWeaponHeaderStats[0x18]; // 0x0        
        // metadata: MPropertyDescription "What stats do we want to show in the weapon stats area?"
        // m_vecWeaponStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecWeaponStats;
        char m_vecWeaponStats[0x18]; // 0x18        
        // metadata: MPropertyDescription "What stats do we want to show in the health header area?"
        // m_vecHealthHeaderStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecHealthHeaderStats;
        char m_vecHealthHeaderStats[0x18]; // 0x30        
        // metadata: MPropertyDescription "What stats do we want to show in the health stats area?"
        // m_vecHealthStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecHealthStats;
        char m_vecHealthStats[0x18]; // 0x48        
        // metadata: MPropertyDescription "What stats do we want to show in the magic header area?"
        // m_vecMagicHeaderStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecMagicHeaderStats;
        char m_vecMagicHeaderStats[0x18]; // 0x60        
        // metadata: MPropertyDescription "What stats do we want to show in the magic stats area?"
        // m_vecMagicStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecMagicStats;
        char m_vecMagicStats[0x18]; // 0x78        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroStatsDisplay_t, m_vecWeaponHeaderStats) == 0x0);
    static_assert(offsetof(HeroStatsDisplay_t, m_vecWeaponStats) == 0x18);
    static_assert(offsetof(HeroStatsDisplay_t, m_vecHealthHeaderStats) == 0x30);
    static_assert(offsetof(HeroStatsDisplay_t, m_vecHealthStats) == 0x48);
    static_assert(offsetof(HeroStatsDisplay_t, m_vecMagicHeaderStats) == 0x60);
    static_assert(offsetof(HeroStatsDisplay_t, m_vecMagicStats) == 0x78);
    
    static_assert(sizeof(HeroStatsDisplay_t) == 0x90);
};
