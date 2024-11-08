#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xeb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bFlying"
    // static metadata: MNetworkVarNames "bool m_bFlyingStarted"
    // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
    // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
    // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLift : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nHoldBombEffect; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca4[0x1fc]; // 0xca4
        // metadata: MNetworkEnable
        bool m_bFlying; // 0xea0        
        // metadata: MNetworkEnable
        bool m_bFlyingStarted; // 0xea1        
        // metadata: MNetworkEnable
        bool m_bIsGrabbing; // 0xea2        
        // metadata: MNetworkEnable
        bool m_bIsHoldingBomb; // 0xea3        
        // metadata: MNetworkEnable
        float m_flCurrentSpeed; // 0xea4        
        [[maybe_unused]] std::uint8_t pad_0xea8[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLift) == 0xeb8);
};
