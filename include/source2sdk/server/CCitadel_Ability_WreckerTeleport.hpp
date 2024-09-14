#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "float m_flArrowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckerTeleport : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x8]; // 0xae8
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xaf0        
        // metadata: MNetworkEnable
        float m_flArrowSpeed; // 0xaf4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSnapAnglesBackTime; // 0xaf8        
        float m_flCastTimeDamage; // 0xafc        
        entity2::GameTime_t m_flCastTime; // 0xb00        
        bool m_bNeedsExplosion; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb05[0x3]; // 0xb05
        Vector m_vProjectileRemovedOrigin; // 0xb08        
        QAngle m_angCasterAnglesAtCastTime; // 0xb14        
        float m_flTravelDistance; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb24[0xfc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckerTeleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_WreckerTeleport) == 0xc20);
};
