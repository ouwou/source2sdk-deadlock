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
    // Size: 0xe88
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
        [[maybe_unused]] std::uint8_t pad_0xc60[0x1f8]; // 0xc60
        // metadata: MNetworkEnable
        Vector m_vecTeleportPosition; // 0xe58        
        // metadata: MNetworkEnable
        Vector m_vecTeleportPositionNormal; // 0xe64        
        // metadata: MNetworkEnable
        client::ETelepunchState_t m_eTelepunchState; // 0xe70        
        [[maybe_unused]] std::uint8_t pad_0xe71[0x3]; // 0xe71
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xe74        
        [[maybe_unused]] std::uint8_t pad_0xe78[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Viscous_Telepunch) == 0xe88);
};
