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
    // Size: 0xba0
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
        [[maybe_unused]] std::uint8_t pad_0xad8[0x38]; // 0xad8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vTop; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb38[0x8]; // 0xb38
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb68[0x8]; // 0xb68
        entity2::GameTime_t m_flActivatePressTime; // 0xb70        
        entity2::GameTime_t m_flDisconnectTime; // 0xb74        
        entity2::GameTime_t m_flClimbStartTime; // 0xb78        
        Vector m_vLastPos; // 0xb7c        
        [[maybe_unused]] std::uint8_t pad_0xb88[0x8]; // 0xb88
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestStopClimbing; // 0xb90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestJumpToRoof; // 0xb91        
        [[maybe_unused]] std::uint8_t pad_0xb92[0x2]; // 0xb92
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xb94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xb98        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xb9c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xba0);
};
