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
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Obscured : public client::CCitadelModifier
    {
    public:
        float m_flStartObscuredAmount; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4]; // 0xc4
        // m_AmbientParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<client::ParticleIndex_t,3> m_AmbientParticles;
        char m_AmbientParticles[0x28]; // 0xc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Obscured because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Obscured) == 0xf0);
};
