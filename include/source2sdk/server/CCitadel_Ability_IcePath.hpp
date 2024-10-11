#pragma once
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
    // Size: 0xb90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIcePathing"
    // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
    // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
    // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
    #pragma pack(push, 1)
    class CCitadel_Ability_IcePath : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x70]; // 0xaf0
        Vector m_vInitialPosition; // 0xb60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bIcePathing; // 0xb6c        
        [[maybe_unused]] std::uint8_t pad_0xb6d[0x3]; // 0xb6d
        // metadata: MNetworkEnable
        QAngle m_qLastAngles; // 0xb70        
        // metadata: MNetworkEnable
        Vector m_vLastVelocity; // 0xb7c        
        // metadata: MNetworkEnable
        bool m_bFirstMovementTick; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IcePath) == 0xb90);
};
