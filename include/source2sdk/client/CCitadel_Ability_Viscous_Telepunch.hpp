#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ETelepunchState_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xea0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTeleportPosition"
    // static metadata: MNetworkVarNames "Vector m_vecTeleportPositionNormal"
    // static metadata: MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Viscous_Telepunch : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc78[0x1f8]; // 0xc78
        // metadata: MNetworkEnable
        Vector m_vecTeleportPosition; // 0xe70        
        // metadata: MNetworkEnable
        Vector m_vecTeleportPositionNormal; // 0xe7c        
        // metadata: MNetworkEnable
        client::ETelepunchState_t m_eTelepunchState; // 0xe88        
        [[maybe_unused]] std::uint8_t pad_0xe89[0x3]; // 0xe89
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xe8c        
        [[maybe_unused]] std::uint8_t pad_0xe90[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Viscous_Telepunch) == 0xea0);
};
