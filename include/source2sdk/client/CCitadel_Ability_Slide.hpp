#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
    // static metadata: MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
    // static metadata: MNetworkVarNames "bool m_bWantsSlide"
    // static metadata: MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
    // static metadata: MNetworkVarNames "bool m_bIsSliding"
    // static metadata: MNetworkVarNames "float m_flSpeedAdjust"
    // static metadata: MNetworkVarNames "GameTime_t m_flDuckPressedTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSlideChangeTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
    // static metadata: MNetworkVarNames "int m_nJumpsThisSlideSession"
    // static metadata: MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Slide : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x58]; // 0xc80
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSlowGetupStartTime; // 0xcf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bShouldTriggerSlowGetup; // 0xcf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bWantsSlide; // 0xcf5        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bAirborneWhenDuckPressed; // 0xcf6        
        // metadata: MNetworkEnable
        bool m_bIsSliding; // 0xcf7        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flSpeedAdjust; // 0xcf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDuckPressedTime; // 0xcfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSlideChangeTime; // 0xd00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xd04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nJumpsThisSlideSession; // 0xd08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flOnGroundStartTime; // 0xd0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashSlideStartTime; // 0xd10        
        bool m_bStartedSlideViaProbeSlope; // 0xd14        
        [[maybe_unused]] std::uint8_t pad_0xd15[0x3]; // 0xd15
        client::ParticleIndex_t m_nSlideEffectIndex; // 0xd18        
        [[maybe_unused]] std::uint8_t pad_0xd1c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Slide) == 0xd28);
};
