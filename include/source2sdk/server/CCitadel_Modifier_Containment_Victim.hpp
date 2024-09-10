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
    // Size: 0x128
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Containment_Victim : public server::CCitadelModifier
    {
    public:
        float m_flGoalHeight; // 0xc8        
        float m_flFallRate; // 0xcc        
        client::ParticleIndex_t m_nFXIndex; // 0xd0        
        client::ParticleIndex_t m_nFXIndexVictim; // 0xd4        
        client::ParticleIndex_t m_nChainFxIndex; // 0xd8        
        float m_flTetherRadius; // 0xdc        
        Vector m_vecOrigin; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xec[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Containment_Victim because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Containment_Victim) == 0x128);
};
