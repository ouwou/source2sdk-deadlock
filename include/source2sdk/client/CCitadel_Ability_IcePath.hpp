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
    // Size: 0xd28
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
        [[maybe_unused]] std::uint8_t pad_0xc98[0x70]; // 0xc98
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIcePathing; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd09[0x3]; // 0xd09
        // metadata: MNetworkEnable
        QAngle m_qLastAngles; // 0xd0c        
        // metadata: MNetworkEnable
        Vector m_vLastVelocity; // 0xd18        
        // metadata: MNetworkEnable
        bool m_bFirstMovementTick; // 0xd24        
        [[maybe_unused]] std::uint8_t pad_0xd25[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IcePath) == 0xd28);
};
