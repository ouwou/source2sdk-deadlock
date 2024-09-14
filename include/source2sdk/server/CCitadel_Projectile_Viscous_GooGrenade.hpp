#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x868
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_Viscous_GooGrenade : public server::CCitadelProjectile
    {
    public:
        int32_t m_nBounces; // 0x820        
        entity2::GameTime_t m_tNextDetonateTime; // 0x824        
        // m_vecProjectileHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecProjectileHitTargets;
        char m_vecProjectileHitTargets[0x18]; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x840[0x28];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_Viscous_GooGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_Viscous_GooGrenade) == 0x868);
};
