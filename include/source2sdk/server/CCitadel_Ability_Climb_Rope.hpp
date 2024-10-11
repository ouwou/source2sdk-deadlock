#pragma once
#include "source2sdk/client/CNetworkOriginQuantizedVector.hpp"
#include "source2sdk/client/EClimbRopeState_t.hpp"
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
    // Size: 0xb80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
    // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
    // static metadata: MNetworkVarNames "bool m_bRequestStopClimbing"
    // static metadata: MNetworkVarNames "bool m_bRequestJumpToRoof"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastMoveTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
    // static metadata: MNetworkVarNames "EClimbRopeState_t m_eClimbState"
    #pragma pack(push, 1)
    class CCitadel_Ability_Climb_Rope : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vTop; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x8]; // 0xb18
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb48[0x8]; // 0xb48
        entity2::GameTime_t m_flActivatePressTime; // 0xb50        
        entity2::GameTime_t m_flDisconnectTime; // 0xb54        
        entity2::GameTime_t m_flClimbStartTime; // 0xb58        
        Vector m_vLastPos; // 0xb5c        
        [[maybe_unused]] std::uint8_t pad_0xb68[0x8]; // 0xb68
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestStopClimbing; // 0xb70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestJumpToRoof; // 0xb71        
        [[maybe_unused]] std::uint8_t pad_0xb72[0x2]; // 0xb72
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xb74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xb78        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xb7c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xb80);
};
