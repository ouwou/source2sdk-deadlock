#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c8
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_Projectile_Tier2Boss_RocketBarrage : public client::C_CitadelProjectile
    {
    public:
        client::ParticleIndex_t m_nLaserParticleIndex; // 0x8b8        
        Vector m_vecSmoothedVelocity; // 0x8bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Projectile_Tier2Boss_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Projectile_Tier2Boss_RocketBarrage) == 0x8c8);
};
