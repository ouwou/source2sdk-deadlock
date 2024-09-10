#pragma once
#include "source2sdk/client/EViscousBowlingBallState_t.hpp"
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
    class CCitadelViscousBall;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
    // static metadata: MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextWallCheck"
    // static metadata: MNetworkVarNames "GameTime_t m_flRollStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flWallExitTime"
    // static metadata: MNetworkVarNames "Vector m_vecWallExitVelocity"
    #pragma pack(push, 1)
    class CCitadel_Ability_GooBowlingBall : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x348]; // 0xad8
        bool m_bHasAirJumped; // 0xe20        
        bool m_bIsFollowingBall; // 0xe21        
        bool m_bIsShowingBall; // 0xe22        
        [[maybe_unused]] std::uint8_t pad_0xe23[0x1]; // 0xe23
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelViscousBall> m_hBall;
        char m_hBall[0x4]; // 0xe24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EViscousBowlingBallState_t m_eRollingState; // 0xe28        
        [[maybe_unused]] std::uint8_t pad_0xe29[0x3]; // 0xe29
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextStateTime; // 0xe2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextWallCheck; // 0xe30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flRollStartTime; // 0xe34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flWallExitTime; // 0xe38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecWallExitVelocity; // 0xe3c        
        [[maybe_unused]] std::uint8_t pad_0xe48[0x170];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_GooBowlingBall) == 0xfb8);
};
