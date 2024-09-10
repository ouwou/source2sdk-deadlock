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
    // Size: 0xe78
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
        client::ParticleIndex_t m_nHoldBombEffect; // 0xc60        
        [[maybe_unused]] std::uint8_t pad_0xc64[0x1fc]; // 0xc64
        // metadata: MNetworkEnable
        bool m_bFlying; // 0xe60        
        // metadata: MNetworkEnable
        bool m_bFlyingStarted; // 0xe61        
        // metadata: MNetworkEnable
        bool m_bIsGrabbing; // 0xe62        
        // metadata: MNetworkEnable
        bool m_bIsHoldingBomb; // 0xe63        
        // metadata: MNetworkEnable
        float m_flCurrentSpeed; // 0xe64        
        [[maybe_unused]] std::uint8_t pad_0xe68[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLift) == 0xe78);
};