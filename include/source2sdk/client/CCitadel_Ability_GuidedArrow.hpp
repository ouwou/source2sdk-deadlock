#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xe00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "float m_flArrowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
    // static metadata: MNetworkVarNames "int m_nBonusTechPower"
    #pragma pack(push, 1)
    class CCitadel_Ability_GuidedArrow : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x8]; // 0xca0
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xca8        
        // metadata: MNetworkEnable
        float m_flArrowSpeed; // 0xcac        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSnapAnglesBackTime; // 0xcb0        
        // metadata: MNetworkEnable
        int32_t m_nBonusTechPower; // 0xcb4        
        entity2::GameTime_t m_flCastTime; // 0xcb8        
        bool m_bNeedsExplosion; // 0xcbc        
        [[maybe_unused]] std::uint8_t pad_0xcbd[0x3]; // 0xcbd
        Vector m_vProjectileRemovedOrigin; // 0xcc0        
        QAngle m_angCasterAnglesAtCastTime; // 0xccc        
        float m_flTravelDistance; // 0xcd8        
        bool m_bInKillFlow; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xcdd[0x3]; // 0xcdd
        float m_flProjectileTurnVel; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce4[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GuidedArrow) == 0xe00);
};
