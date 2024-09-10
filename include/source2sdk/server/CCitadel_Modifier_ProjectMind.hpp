#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ProjectMind : public server::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_particleStart; // 0xc8        
        client::ParticleIndex_t m_particleEnd; // 0xcc        
        client::ParticleIndex_t m_particleTrail; // 0xd0        
        Vector m_vecEndLocation; // 0xd4        
        Vector m_vecStartPosition; // 0xe0        
        float m_flStartDelay; // 0xec        
        Vector m_vecApplyOffset; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xfc[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ProjectMind because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ProjectMind) == 0x1a8);
};
