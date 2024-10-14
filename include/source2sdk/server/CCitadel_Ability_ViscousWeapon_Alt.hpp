#pragma once
#include "source2sdk/client/EViscousChargedGunState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EViscousChargedGunState m_ChargeState"
    // static metadata: MNetworkVarNames "float m_nClipConsumed"
    // static metadata: MNetworkVarNames "bool m_bIsCharging"
    // static metadata: MNetworkVarNames "bool m_bIsToggled"
    #pragma pack(push, 1)
    class CCitadel_Ability_ViscousWeapon_Alt : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        client::EViscousChargedGunState m_ChargeState; // 0xaf8        
        // metadata: MNetworkEnable
        float m_nClipConsumed; // 0xafc        
        // metadata: MNetworkEnable
        bool m_bIsCharging; // 0xb00        
        // metadata: MNetworkEnable
        bool m_bIsToggled; // 0xb01        
        [[maybe_unused]] std::uint8_t pad_0xb02[0x2]; // 0xb02
        client::ParticleIndex_t m_fxChargingParticle; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb08[0x8]; // 0xb08
        entity2::GameTime_t m_flLastBulletConsumedTime; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0x234];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ViscousWeapon_Alt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ViscousWeapon_Alt) == 0xd48);
};
