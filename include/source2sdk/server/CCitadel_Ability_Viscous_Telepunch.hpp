#pragma once
#include "source2sdk/client/ETelepunchState_t.hpp"
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
    // Size: 0xd10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecTeleportPosition"
    // static metadata: MNetworkVarNames "Vector m_vecTeleportPositionNormal"
    // static metadata: MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Viscous_Telepunch : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x1f8]; // 0xae8
        // metadata: MNetworkEnable
        Vector m_vecTeleportPosition; // 0xce0        
        // metadata: MNetworkEnable
        Vector m_vecTeleportPositionNormal; // 0xcec        
        // metadata: MNetworkEnable
        client::ETelepunchState_t m_eTelepunchState; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcf9[0x3]; // 0xcf9
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xd00[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Viscous_Telepunch) == 0xd10);
};
