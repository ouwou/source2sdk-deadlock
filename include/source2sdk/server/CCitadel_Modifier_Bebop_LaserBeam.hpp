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
    // Size: 0x370
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bebop_LaserBeam : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x270]; // 0xc0
        entity2::GameTime_t m_flSoundStartTime; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x334[0x4]; // 0x334
        Vector m_vStart; // 0x338        
        Vector m_vEnd; // 0x344        
        Vector m_vPrevEnd; // 0x350        
        float m_flAngleBetweenTrace; // 0x35c        
        float m_flDamagePerTick; // 0x360        
        entity2::GameTime_t m_flNextDamageTick; // 0x364        
        int32_t m_nTotalDamage; // 0x368        
        [[maybe_unused]] std::uint8_t pad_0x36c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bebop_LaserBeam) == 0x370);
};
