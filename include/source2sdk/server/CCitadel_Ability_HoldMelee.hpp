#pragma once
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_Melee_Base.hpp"
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
    // Size: 0xbe0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextParryTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
    // static metadata: MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
    // static metadata: MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
    // static metadata: MNetworkVarNames "Vector m_vAirDashDir"
    // static metadata: MNetworkVarNames "bool m_bAttackStartedWhileSliding"
    #pragma pack(push, 1)
    class CCitadel_Ability_HoldMelee : public server::CCitadel_Ability_Melee_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flParryWindowEndTime; // 0xba0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextParryTime; // 0xba4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flStateStartTime; // 0xba8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xbac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xbb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xbb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAirDashDir; // 0xbb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bAttackStartedWhileSliding; // 0xbc4        
        bool m_bCreatedChargeEffects; // 0xbc5        
        [[maybe_unused]] std::uint8_t pad_0xbc6[0x2]; // 0xbc6
        QAngle m_angForced; // 0xbc8        
        [[maybe_unused]] std::uint8_t pad_0xbd4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HoldMelee) == 0xbe0);
};
