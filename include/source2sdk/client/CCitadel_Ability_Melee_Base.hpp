#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd18
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkVarNames "bool m_bUsingThisMelee"
    // static metadata: MNetworkVarNames "bool m_bUsingMeleeTagActive"
    // static metadata: MNetworkVarNames "bool m_bHitWithThisAttack"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastActivateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Melee_Base : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bUsingThisMelee; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bUsingMeleeTagActive; // 0xc99        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHitWithThisAttack; // 0xc9a        
        [[maybe_unused]] std::uint8_t pad_0xc9b[0x1]; // 0xc9b
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastActivateTime; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackAllowedTime; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackTriggeredTime; // 0xca4        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Melee_Base) == 0xd18);
};
