#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifierAura_Cone.hpp"
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
    class CCitadel_Modifier_Bull_Heal_Aura : public server::CCitadelModifierAura_Cone
    {
    public:
        QAngle m_playerAngles; // 0xe0        
        client::ParticleIndex_t m_ConeParticle; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xf0[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Heal_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bull_Heal_Aura) == 0x128);
};
