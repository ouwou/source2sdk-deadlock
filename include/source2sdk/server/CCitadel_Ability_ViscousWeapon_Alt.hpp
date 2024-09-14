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
    // Size: 0xd38
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
        client::EViscousChargedGunState m_ChargeState; // 0xae8        
        // metadata: MNetworkEnable
        float m_nClipConsumed; // 0xaec        
        // metadata: MNetworkEnable
        bool m_bIsCharging; // 0xaf0        
        // metadata: MNetworkEnable
        bool m_bIsToggled; // 0xaf1        
        [[maybe_unused]] std::uint8_t pad_0xaf2[0x2]; // 0xaf2
        client::ParticleIndex_t m_fxChargingParticle; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x8]; // 0xaf8
        entity2::GameTime_t m_flLastBulletConsumedTime; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x234];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ViscousWeapon_Alt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ViscousWeapon_Alt) == 0xd38);
};
