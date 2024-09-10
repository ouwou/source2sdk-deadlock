#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x330
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bebop_LaserBeam : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x238]; // 0xc0
        entity2::GameTime_t m_flSoundStartTime; // 0x2f8        
        [[maybe_unused]] std::uint8_t pad_0x2fc[0x4]; // 0x2fc
        Vector m_vStart; // 0x300        
        Vector m_vEnd; // 0x30c        
        Vector m_vPrevEnd; // 0x318        
        float m_flAngleBetweenTrace; // 0x324        
        float m_flDamagePerTick; // 0x328        
        entity2::GameTime_t m_flNextDamageTick; // 0x32c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bebop_LaserBeam because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Bebop_LaserBeam) == 0x330);
};
