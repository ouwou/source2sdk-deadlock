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
    // Size: 0x248
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_VoidSphere : public server::CCitadelModifier
    {
    public:
        bool m_bTeleported; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        client::ParticleIndex_t m_particleStart; // 0xc4        
        client::ParticleIndex_t m_particleEnd; // 0xc8        
        client::ParticleIndex_t m_particleTrail; // 0xcc        
        Vector m_vecEndLocation; // 0xd0        
        Vector m_vecStartPosition; // 0xdc        
        Vector m_vecEndLocationCaster; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VoidSphere because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VoidSphere) == 0x248);
};
