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
    // Size: 0x8c0
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_Projectile_Bebop_Hook : public client::C_CitadelProjectile
    {
    public:
        client::ParticleIndex_t m_iChainEffect; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Projectile_Bebop_Hook because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Projectile_Bebop_Hook) == 0x8c0);
};
