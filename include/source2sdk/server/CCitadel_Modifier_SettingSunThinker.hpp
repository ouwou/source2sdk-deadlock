#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_SettingSunThinker : public server::CCitadelModifier
    {
    public:
        float m_flTickInterval; // 0xc0        
        float m_flRadius; // 0xc4        
        float m_CenterRadius; // 0xc8        
        float m_CenterDamage; // 0xcc        
        float m_OuterDamage; // 0xd0        
        float m_StunDuration; // 0xd4        
        float m_TargetingDuration; // 0xd8        
        float m_ShootDuration; // 0xdc        
        bool m_bTargetingCompleted; // 0xe0        
        bool m_bSecondHit; // 0xe1        
        bool m_bTwoHits; // 0xe2        
        [[maybe_unused]] std::uint8_t pad_0xe3[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SettingSunThinker because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_SettingSunThinker) == 0xe8);
};
