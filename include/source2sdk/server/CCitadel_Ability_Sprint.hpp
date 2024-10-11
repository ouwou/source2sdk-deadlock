#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bSprinting"
    // static metadata: MNetworkVarNames "GameTime_t m_flInCombatStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flInCombatEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSprintStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Sprint : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nSprintParticle; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSprintingChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSprinting; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xaf5[0x3]; // 0xaf5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flInCombatStartTime; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flInCombatEndTime; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSprintStartTime; // 0xb00        
        bool m_bInCombat; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb05[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Sprint) == 0xb08);
};
