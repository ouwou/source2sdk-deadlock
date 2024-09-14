#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x900
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_Projectile_Viscous_GooGrenade : public client::C_CitadelProjectile
    {
    public:
        int32_t m_nBounces; // 0x8b8        
        entity2::GameTime_t m_tNextDetonateTime; // 0x8bc        
        // m_vecProjectileHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecProjectileHitTargets;
        char m_vecProjectileHitTargets[0x18]; // 0x8c0        
        [[maybe_unused]] std::uint8_t pad_0x8d8[0x28];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Projectile_Viscous_GooGrenade because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Projectile_Viscous_GooGrenade) == 0x900);
};
