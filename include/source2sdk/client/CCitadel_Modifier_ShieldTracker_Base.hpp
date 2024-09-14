#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ShieldTracker_Base : public client::CCitadelModifier
    {
    public:
        Vector m_vecShield; // 0xc0        
        float m_flShieldDamageTime; // 0xcc        
        float m_flShieldBreakTime; // 0xd0        
        float m_flShieldBreakHealAmount; // 0xd4        
        float m_flShieldBreakHealDone; // 0xd8        
        bool m_bShieldHealingAfterBreak; // 0xdc        
        bool m_bForceRegen; // 0xdd        
        [[maybe_unused]] std::uint8_t pad_0xde[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ShieldTracker_Base because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ShieldTracker_Base) == 0xe0);
};
