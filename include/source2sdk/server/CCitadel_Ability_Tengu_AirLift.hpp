#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xd10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bFlying"
    // static metadata: MNetworkVarNames "bool m_bFlyingStarted"
    // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
    // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
    // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLift : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x1c]; // 0xaf0
        client::ParticleIndex_t m_nHoldBombEffect; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x1f8]; // 0xb10
        // metadata: MNetworkEnable
        bool m_bFlying; // 0xd08        
        // metadata: MNetworkEnable
        bool m_bFlyingStarted; // 0xd09        
        // metadata: MNetworkEnable
        bool m_bIsGrabbing; // 0xd0a        
        // metadata: MNetworkEnable
        bool m_bIsHoldingBomb; // 0xd0b        
        // metadata: MNetworkEnable
        float m_flCurrentSpeed; // 0xd0c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLift) == 0xd10);
};
