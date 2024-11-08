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
    class CCitadelAnimatingModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "float m_flArrowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
    // static metadata: MNetworkVarNames "int m_nBonusTechPower"
    #pragma pack(push, 1)
    class CCitadel_Ability_GuidedArrow : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x8]; // 0xb00
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xb08        
        // metadata: MNetworkEnable
        float m_flArrowSpeed; // 0xb0c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSnapAnglesBackTime; // 0xb10        
        // metadata: MNetworkEnable
        int32_t m_nBonusTechPower; // 0xb14        
        // m_hOwl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelAnimatingModelEntity> m_hOwl;
        char m_hOwl[0x4]; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0xc]; // 0xb1c
        entity2::GameTime_t m_flCastTime; // 0xb28        
        bool m_bNeedsExplosion; // 0xb2c        
        [[maybe_unused]] std::uint8_t pad_0xb2d[0x3]; // 0xb2d
        Vector m_vProjectileRemovedOrigin; // 0xb30        
        QAngle m_angCasterAnglesAtCastTime; // 0xb3c        
        float m_flTravelDistance; // 0xb48        
        bool m_bInKillFlow; // 0xb4c        
        [[maybe_unused]] std::uint8_t pad_0xb4d[0x3]; // 0xb4d
        float m_flProjectileTurnVel; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb54[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GuidedArrow) == 0xc70);
};
