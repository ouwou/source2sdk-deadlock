#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_UtilityUpgrade_RocketBoots.hpp"
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
    // Size: 0xd70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flCastTime"
    // static metadata: MNetworkVarNames "bool m_bCrashingDown"
    // static metadata: MNetworkVarNames "bool m_bImpulseApplied"
    // static metadata: MNetworkVarNames "bool m_bCanCrash"
    // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
    // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_RocketBooster : public server::CCitadel_UtilityUpgrade_RocketBoots
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb88[0x4]; // 0xb88
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xb8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCanSlamDownChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flCastTime; // 0xb90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCrashingDown; // 0xb94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bImpulseApplied; // 0xb95        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanCrash; // 0xb96        
        [[maybe_unused]] std::uint8_t pad_0xb97[0x1]; // 0xb97
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecCrashPosition; // 0xb98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecCrashDirection; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xbb0[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBooster because it is not a standard-layout class
    static_assert(sizeof(CCitadel_UtilityUpgrade_RocketBooster) == 0xd70);
};
