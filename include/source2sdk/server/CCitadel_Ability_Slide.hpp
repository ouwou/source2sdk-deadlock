#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    class CCitadel_Ability_Slide : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x58]; // 0xaf8
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xb50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSlowGetupStartTime; // 0xb68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bShouldTriggerSlowGetup; // 0xb6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bWantsSlide; // 0xb6d        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bAirborneWhenDuckPressed; // 0xb6e        
        // metadata: MNetworkEnable
        bool m_bIsSliding; // 0xb6f        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flSpeedAdjust; // 0xb70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDuckPressedTime; // 0xb74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSlideChangeTime; // 0xb78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xb7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nJumpsThisSlideSession; // 0xb80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flOnGroundStartTime; // 0xb84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDashSlideStartTime; // 0xb88        
        bool m_bStartedSlideViaProbeSlope; // 0xb8c        
        [[maybe_unused]] std::uint8_t pad_0xb8d[0x3]; // 0xb8d
        client::ParticleIndex_t m_nSlideEffectIndex; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb94[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Slide) == 0xba0);
};
