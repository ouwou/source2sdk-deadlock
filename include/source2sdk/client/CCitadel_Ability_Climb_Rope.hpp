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
    // Size: 0xd08
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
        client::CNetworkOriginQuantizedVector m_vTop; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc98[0x8]; // 0xc98
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x8]; // 0xcc8
        entity2::GameTime_t m_flActivatePressTime; // 0xcd0        
        entity2::GameTime_t m_flDisconnectTime; // 0xcd4        
        entity2::GameTime_t m_flClimbStartTime; // 0xcd8        
        Vector m_vLastPos; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce8[0x8]; // 0xce8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestStopClimbing; // 0xcf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bRequestJumpToRoof; // 0xcf1        
        [[maybe_unused]] std::uint8_t pad_0xcf2[0x2]; // 0xcf2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xcf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xcf8        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xd00[0x4]; // 0xd00
        int32_t m_ClimbCount; // 0xd04        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xd08);
};
