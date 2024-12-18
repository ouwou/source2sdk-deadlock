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
    // Size: 0xdb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "float m_flArrowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckerTeleport : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x8]; // 0xc98
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xca0        
        // metadata: MNetworkEnable
        float m_flArrowSpeed; // 0xca4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSnapAnglesBackTime; // 0xca8        
        float m_flCastTimeDamage; // 0xcac        
        entity2::GameTime_t m_flCastTime; // 0xcb0        
        bool m_bNeedsExplosion; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcb5[0x3]; // 0xcb5
        Vector m_vProjectileRemovedOrigin; // 0xcb8        
        QAngle m_angCasterAnglesAtCastTime; // 0xcc4        
        float m_flTravelDistance; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd4[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckerTeleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_WreckerTeleport) == 0xdb8);
};
