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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ShieldTracker_Base : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x28]; // 0xc0
        Vector m_vecShield; // 0xe8        
        float m_flShieldDamageTime; // 0xf4        
        float m_flShieldBreakTime; // 0xf8        
        float m_flShieldBreakHealAmount; // 0xfc        
        float m_flShieldBreakHealDone; // 0x100        
        bool m_bShieldHealingAfterBreak; // 0x104        
        bool m_bForceRegen; // 0x105        
        [[maybe_unused]] std::uint8_t pad_0x106[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ShieldTracker_Base because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ShieldTracker_Base) == 0x108);
};
