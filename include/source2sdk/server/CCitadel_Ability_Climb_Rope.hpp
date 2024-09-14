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
    // Size: 0xb78
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
        client::CNetworkOriginQuantizedVector m_vTop; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x8]; // 0xb10
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb40[0x8]; // 0xb40
        entity2::GameTime_t m_flActivatePressTime; // 0xb48        
        entity2::GameTime_t m_flDisconnectTime; // 0xb4c        
        entity2::GameTime_t m_flClimbStartTime; // 0xb50        
        Vector m_vLastPos; // 0xb54        
        [[maybe_unused]] std::uint8_t pad_0xb60[0x8]; // 0xb60
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestStopClimbing; // 0xb68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestJumpToRoof; // 0xb69        
        [[maybe_unused]] std::uint8_t pad_0xb6a[0x2]; // 0xb6a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xb6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xb70        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xb74        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xb78);
};
