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
    // Size: 0x218
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public server::CCitadelModifier
    {
    public:
        int32_t m_iPulseCount; // 0xc0        
        client::ParticleIndex_t m_hPreviewRingParticle; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Chrono_PulseGrenade_PulseArea because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Chrono_PulseGrenade_PulseArea) == 0x218);
};
