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
    // Size: 0xfe0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRolling"
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
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x348]; // 0xaf8
        int32_t m_nAirJumpsLeft; // 0xe40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkChangeCallback "OnIsRollingChanged"
        bool m_bIsRolling; // 0xe44        
        [[maybe_unused]] std::uint8_t pad_0xe45[0x3]; // 0xe45
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelViscousBall> m_hBall;
        char m_hBall[0x4]; // 0xe48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EViscousBowlingBallState_t m_eRollingState; // 0xe4c        
        [[maybe_unused]] std::uint8_t pad_0xe4d[0x3]; // 0xe4d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextStateTime; // 0xe50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextWallCheck; // 0xe54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flRollStartTime; // 0xe58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flWallExitTime; // 0xe5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecWallExitVelocity; // 0xe60        
        [[maybe_unused]] std::uint8_t pad_0xe6c[0x174];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GooBowlingBall) == 0xfe0);
};
