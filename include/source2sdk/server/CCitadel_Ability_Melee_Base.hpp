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
    // Size: 0xb70
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
        int32_t m_nHitNumber; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bUsingThisMelee; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bUsingMeleeTagActive; // 0xaed        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bHitWithThisAttack; // 0xaee        
        [[maybe_unused]] std::uint8_t pad_0xaef[0x1]; // 0xaef
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastActivateTime; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextAttackAllowedTime; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAttackTriggeredTime; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Melee_Base) == 0xb70);
};
