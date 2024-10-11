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
    // Size: 0x1168
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
    class CCitadel_Ability_GooBowlingBall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x348]; // 0xc80
        int32_t m_nAirJumpsLeft; // 0xfc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkChangeCallback "OnIsRollingChanged"
        bool m_bIsRolling; // 0xfcc        
        [[maybe_unused]] std::uint8_t pad_0xfcd[0x3]; // 0xfcd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelViscousBall> m_hBall;
        char m_hBall[0x4]; // 0xfd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EViscousBowlingBallState_t m_eRollingState; // 0xfd4        
        [[maybe_unused]] std::uint8_t pad_0xfd5[0x3]; // 0xfd5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextStateTime; // 0xfd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextWallCheck; // 0xfdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flRollStartTime; // 0xfe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flWallExitTime; // 0xfe4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecWallExitVelocity; // 0xfe8        
        [[maybe_unused]] std::uint8_t pad_0xff4[0x8]; // 0xff4
        client::ParticleIndex_t m_nDirectionParticleIndex; // 0xffc        
        [[maybe_unused]] std::uint8_t pad_0x1000[0x168];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GooBowlingBall) == 0x1168);
};
