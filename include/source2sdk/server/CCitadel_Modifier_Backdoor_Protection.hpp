#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Backdoor_Protection : public server::CCitadelModifier
    {
    public:
        int32_t m_MaxHealth; // 0xc0        
        entity2::GameTime_t m_flLastAttackedTime; // 0xc4        
        client::ParticleIndex_t m_nActiveShieldEffect; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Backdoor_Protection because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Backdoor_Protection) == 0xd0);
};
