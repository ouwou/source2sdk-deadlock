#pragma once
#include "source2sdk/client/CNetworkOriginQuantizedVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EClimbRopeState_t.hpp"
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
    // Size: 0xd30
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
    class CCitadel_Ability_Climb_Rope : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkOriginQuantizedVector m_vTop; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xcc0[0x8]; // 0xcc0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xcf0[0x8]; // 0xcf0
        entity2::GameTime_t m_flActivatePressTime; // 0xcf8        
        entity2::GameTime_t m_flDisconnectTime; // 0xcfc        
        entity2::GameTime_t m_flClimbStartTime; // 0xd00        
        Vector m_vLastPos; // 0xd04        
        [[maybe_unused]] std::uint8_t pad_0xd10[0x8]; // 0xd10
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bRequestStopClimbing; // 0xd18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bRequestJumpToRoof; // 0xd19        
        [[maybe_unused]] std::uint8_t pad_0xd1a[0x2]; // 0xd1a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xd1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xd20        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xd24        
        [[maybe_unused]] std::uint8_t pad_0xd28[0x4]; // 0xd28
        int32_t m_ClimbCount; // 0xd2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xd30);
};
