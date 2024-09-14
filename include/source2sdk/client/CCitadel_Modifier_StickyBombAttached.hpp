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
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_StickyBombAttached : public client::CCitadelModifier
    {
    public:
        bool m_bDetonateSoundStarted; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0xb]; // 0xc1
        float m_flDamage; // 0xcc        
        client::ParticleIndex_t m_nParticleIndex; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StickyBombAttached because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StickyBombAttached) == 0x110);
};
