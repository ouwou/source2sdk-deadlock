#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelModifier_Viscous_Goo_Aura : public server::CCitadelModifierAura
    {
    public:
        client::ParticleIndex_t m_AuraParticle; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifier_Viscous_Goo_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifier_Viscous_Goo_Aura) == 0xe8);
};
