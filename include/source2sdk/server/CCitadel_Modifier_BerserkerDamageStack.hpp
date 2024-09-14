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
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BerserkerDamageStack : public server::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_nBuffParticle; // 0xc0        
        client::ParticleIndex_t m_nBuffParticleEnemy; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BerserkerDamageStack because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BerserkerDamageStack) == 0x100);
};
