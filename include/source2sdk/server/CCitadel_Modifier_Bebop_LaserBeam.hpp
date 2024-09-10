#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x340
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bebop_LaserBeam : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x238]; // 0xc8
        entity2::GameTime_t m_flSoundStartTime; // 0x300        
        [[maybe_unused]] std::uint8_t pad_0x304[0x4]; // 0x304
        Vector m_vStart; // 0x308        
        Vector m_vEnd; // 0x314        
        Vector m_vPrevEnd; // 0x320        
        float m_flAngleBetweenTrace; // 0x32c        
        float m_flDamagePerTick; // 0x330        
        entity2::GameTime_t m_flNextDamageTick; // 0x334        
        int32_t m_nTotalDamage; // 0x338        
        [[maybe_unused]] std::uint8_t pad_0x33c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bebop_LaserBeam because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Bebop_LaserBeam) == 0x340);
};
