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
    // Size: 0xd48
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flParryWindowEndTime; // 0xd00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextParryTime; // 0xd04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flStateStartTime; // 0xd08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xd0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xd10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xd14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vAirDashDir; // 0xd18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bAttackStartedWhileSliding; // 0xd24        
        bool m_bCreatedChargeEffects; // 0xd25        
        [[maybe_unused]] std::uint8_t pad_0xd26[0x2]; // 0xd26
        QAngle m_angForced; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd34[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HoldMelee) == 0xd48);
};
