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
    // Size: 0xb10
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
        client::ParticleIndex_t m_nSprintParticle; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSprintingChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bSprinting; // 0xafc        
        [[maybe_unused]] std::uint8_t pad_0xafd[0x3]; // 0xafd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flInCombatStartTime; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flInCombatEndTime; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSprintStartTime; // 0xb08        
        bool m_bInCombat; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb0d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Sprint) == 0xb10);
};
