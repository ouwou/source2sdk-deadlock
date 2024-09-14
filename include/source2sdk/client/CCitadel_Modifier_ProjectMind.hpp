#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ProjectMind : public client::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_particleStart; // 0xc0        
        client::ParticleIndex_t m_particleEnd; // 0xc4        
        client::ParticleIndex_t m_particleTrail; // 0xc8        
        Vector m_vecEndLocation; // 0xcc        
        Vector m_vecStartPosition; // 0xd8        
        float m_flStartDelay; // 0xe4        
        Vector m_vecApplyOffset; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xf4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ProjectMind because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ProjectMind) == 0x1a0);
};
