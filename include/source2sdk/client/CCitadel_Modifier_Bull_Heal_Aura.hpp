#pragma once
#include "source2sdk/client/CCitadelModifierAura_Cone.hpp"
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
    // Size: 0x138
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bull_Heal_Aura : public client::CCitadelModifierAura_Cone
    {
    public:
        QAngle m_playerAngles; // 0xf0        
        client::ParticleIndex_t m_ConeParticle; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0x100[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Heal_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bull_Heal_Aura) == 0x138);
};
