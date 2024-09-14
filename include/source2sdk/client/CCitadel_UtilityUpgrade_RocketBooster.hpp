#pragma once
#include "source2sdk/client/CCitadel_UtilityUpgrade_RocketBoots.hpp"
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
    // Size: 0xee0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flCastTime"
    // static metadata: MNetworkVarNames "bool m_bCrashingDown"
    // static metadata: MNetworkVarNames "bool m_bImpulseApplied"
    // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
    // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_RocketBooster : public client::CCitadel_UtilityUpgrade_RocketBoots
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x4]; // 0xcf8
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xcfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCanSlamDownChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flCastTime; // 0xd00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCrashingDown; // 0xd04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bImpulseApplied; // 0xd05        
        [[maybe_unused]] std::uint8_t pad_0xd06[0x2]; // 0xd06
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecCrashPosition; // 0xd08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecCrashDirection; // 0xd14        
        [[maybe_unused]] std::uint8_t pad_0xd20[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBooster because it is not a standard-layout class
    static_assert(sizeof(CCitadel_UtilityUpgrade_RocketBooster) == 0xee0);
};
