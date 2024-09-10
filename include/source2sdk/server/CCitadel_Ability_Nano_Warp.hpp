#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Warp : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vTeleportTarget; // 0xad8        
        client::ParticleIndex_t m_ChannelParticle; // 0xae4        
        [[maybe_unused]] std::uint8_t pad_0xae8[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Warp because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Nano_Warp) == 0xc38);
};
