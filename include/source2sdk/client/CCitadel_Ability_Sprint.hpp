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
    // Size: 0xcb0
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
        client::ParticleIndex_t m_nSprintParticle; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSprintingChanged"
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bSprinting; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flInCombatStartTime; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flInCombatEndTime; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSprintStartTime; // 0xca8        
        bool m_bInCombat; // 0xcac        
        [[maybe_unused]] std::uint8_t pad_0xcad[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Sprint) == 0xcb0);
};
