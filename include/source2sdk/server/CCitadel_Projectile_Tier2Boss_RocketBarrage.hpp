#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x830
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_Tier2Boss_RocketBarrage : public server::CCitadelProjectile
    {
    public:
        client::ParticleIndex_t m_nLaserParticleIndex; // 0x820        
        Vector m_vecSmoothedVelocity; // 0x824        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_Tier2Boss_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_Tier2Boss_RocketBarrage) == 0x830);
};
