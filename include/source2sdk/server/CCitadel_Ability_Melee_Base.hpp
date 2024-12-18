#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb98
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
    class CCitadel_Ability_Melee_Base : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x18]; // 0xaf8
        int32_t m_nHitNumber; // 0xb10        
        int32_t m_nPlayerKillNumber; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bUsingThisMelee; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bUsingMeleeTagActive; // 0xb19        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHitWithThisAttack; // 0xb1a        
        [[maybe_unused]] std::uint8_t pad_0xb1b[0x1]; // 0xb1b
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastActivateTime; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackAllowedTime; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackTriggeredTime; // 0xb24        
        [[maybe_unused]] std::uint8_t pad_0xb28[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Melee_Base) == 0xb98);
};
