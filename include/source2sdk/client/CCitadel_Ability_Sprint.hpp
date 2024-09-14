#pragma once
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
    // Size: 0xc88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bSprinting"
    // static metadata: MNetworkVarNames "GameTime_t m_flInCombatStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flInCombatEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSprintStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Sprint : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nSprintParticle; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSprintingChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSprinting; // 0xc74        
        [[maybe_unused]] std::uint8_t pad_0xc75[0x3]; // 0xc75
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flInCombatStartTime; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flInCombatEndTime; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSprintStartTime; // 0xc80        
        bool m_bInCombat; // 0xc84        
        [[maybe_unused]] std::uint8_t pad_0xc85[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Sprint) == 0xc88);
};
