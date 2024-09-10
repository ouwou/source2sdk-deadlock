#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xcf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIcePathing"
    // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
    // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
    // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
    #pragma pack(push, 1)
    class CCitadel_Ability_IcePath : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x70]; // 0xc60
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bIcePathing; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x3]; // 0xcd1
        // metadata: MNetworkEnable
        QAngle m_qLastAngles; // 0xcd4        
        // metadata: MNetworkEnable
        Vector m_vLastVelocity; // 0xce0        
        // metadata: MNetworkEnable
        bool m_bFirstMovementTick; // 0xcec        
        [[maybe_unused]] std::uint8_t pad_0xced[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_IcePath) == 0xcf0);
};
