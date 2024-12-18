#pragma once
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
    // Size: 0xd60
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
    class CCitadel_Ability_HoldMelee : public client::CCitadel_Ability_Melee_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flParryWindowEndTime; // 0xd18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextParryTime; // 0xd1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flStateStartTime; // 0xd20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xd24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xd28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xd2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAirDashDir; // 0xd30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bAttackStartedWhileSliding; // 0xd3c        
        bool m_bCreatedChargeEffects; // 0xd3d        
        [[maybe_unused]] std::uint8_t pad_0xd3e[0x2]; // 0xd3e
        QAngle m_angForced; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd4c[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HoldMelee) == 0xd60);
};
