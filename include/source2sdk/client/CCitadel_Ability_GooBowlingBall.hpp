#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EViscousBowlingBallState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class C_CitadelViscousBall;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1148
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
    class CCitadel_Ability_GooBowlingBall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x348]; // 0xc60
        bool m_bHasAirJumped; // 0xfa8        
        bool m_bIsFollowingBall; // 0xfa9        
        bool m_bIsShowingBall; // 0xfaa        
        [[maybe_unused]] std::uint8_t pad_0xfab[0x1]; // 0xfab
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelViscousBall> m_hBall;
        char m_hBall[0x4]; // 0xfac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EViscousBowlingBallState_t m_eRollingState; // 0xfb0        
        [[maybe_unused]] std::uint8_t pad_0xfb1[0x3]; // 0xfb1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextStateTime; // 0xfb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextWallCheck; // 0xfb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flRollStartTime; // 0xfbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flWallExitTime; // 0xfc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecWallExitVelocity; // 0xfc4        
        [[maybe_unused]] std::uint8_t pad_0xfd0[0x8]; // 0xfd0
        client::ParticleIndex_t m_nDirectionParticleIndex; // 0xfd8        
        [[maybe_unused]] std::uint8_t pad_0xfdc[0x16c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_GooBowlingBall) == 0x1148);
};
