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
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ShieldTracker_Base : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x28]; // 0xc8
        Vector m_vecShield; // 0xf0        
        float m_flShieldDamageTime; // 0xfc        
        float m_flShieldBreakTime; // 0x100        
        float m_flShieldBreakHealAmount; // 0x104        
        float m_flShieldBreakHealDone; // 0x108        
        bool m_bShieldHealingAfterBreak; // 0x10c        
        bool m_bForceRegen; // 0x10d        
        [[maybe_unused]] std::uint8_t pad_0x10e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ShieldTracker_Base because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ShieldTracker_Base) == 0x110);
};
