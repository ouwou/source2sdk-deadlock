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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NewPlayerMetrics_t
    {
    public:
        CUtlString m_strSkillTierName; // 0x0        
        int32_t m_NetWorth; // 0x8        
        int32_t m_DamageTaken; // 0xc        
        int32_t m_BossDamage; // 0x10        
        int32_t m_PlayerDamage; // 0x14        
        int32_t m_LastHits; // 0x18        
        int32_t m_OrbsSecured; // 0x1c        
        int32_t m_OrbsDenied; // 0x20        
        int32_t m_AbilitiesUpgraded; // 0x24        
        int32_t m_ModsPurchased; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NewPlayerMetrics_t, m_strSkillTierName) == 0x0);
    static_assert(offsetof(NewPlayerMetrics_t, m_NetWorth) == 0x8);
    static_assert(offsetof(NewPlayerMetrics_t, m_DamageTaken) == 0xc);
    static_assert(offsetof(NewPlayerMetrics_t, m_BossDamage) == 0x10);
    static_assert(offsetof(NewPlayerMetrics_t, m_PlayerDamage) == 0x14);
    static_assert(offsetof(NewPlayerMetrics_t, m_LastHits) == 0x18);
    static_assert(offsetof(NewPlayerMetrics_t, m_OrbsSecured) == 0x1c);
    static_assert(offsetof(NewPlayerMetrics_t, m_OrbsDenied) == 0x20);
    static_assert(offsetof(NewPlayerMetrics_t, m_AbilitiesUpgraded) == 0x24);
    static_assert(offsetof(NewPlayerMetrics_t, m_ModsPurchased) == 0x28);
    
    static_assert(sizeof(NewPlayerMetrics_t) == 0x30);
};
