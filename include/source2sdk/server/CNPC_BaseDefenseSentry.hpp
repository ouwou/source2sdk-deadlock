#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"
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
    // Size: 0xba0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
    #pragma pack(push, 1)
    class CNPC_BaseDefenseSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb40[0x8]; // 0xb40
        // metadata: MNetworkEnable
        Vector m_vecUnitStatusOffset; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb54[0x28]; // 0xb54
        float m_flAttackCone; // 0xb7c        
        float m_flAttackDelay; // 0xb80        
        entity2::GameTime_t m_flLastAlertSound; // 0xb84        
        [[maybe_unused]] std::uint8_t pad_0xb88[0x4]; // 0xb88
        int16_t m_nSentryLevel; // 0xb8c        
        [[maybe_unused]] std::uint8_t pad_0xb8e[0x2]; // 0xb8e
        Vector m_vecForward; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb9c[0x4];
        
        // Datamap fields:
        // void EnableAttacking; // 0x0
        // void DisableAttacking; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_BaseDefenseSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_BaseDefenseSentry) == 0xba0);
};
