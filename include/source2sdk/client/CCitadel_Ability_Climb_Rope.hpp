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
    // Size: 0xd18
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vTop; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x8]; // 0xca8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcd8[0x8]; // 0xcd8
        entity2::GameTime_t m_flActivatePressTime; // 0xce0        
        entity2::GameTime_t m_flDisconnectTime; // 0xce4        
        entity2::GameTime_t m_flClimbStartTime; // 0xce8        
        Vector m_vLastPos; // 0xcec        
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x8]; // 0xcf8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestStopClimbing; // 0xd00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestJumpToRoof; // 0xd01        
        [[maybe_unused]] std::uint8_t pad_0xd02[0x2]; // 0xd02
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xd04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xd08        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xd0c        
        [[maybe_unused]] std::uint8_t pad_0xd10[0x4]; // 0xd10
        int32_t m_ClimbCount; // 0xd14        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xd18);
};
