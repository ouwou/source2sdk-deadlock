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
    // Size: 0xb98
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
    #pragma pack(push, 1)
    class CNPC_BaseDefenseSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb38[0x8]; // 0xb38
        // metadata: MNetworkEnable
        Vector m_vecUnitStatusOffset; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x28]; // 0xb4c
        float m_flAttackCone; // 0xb74        
        float m_flAttackDelay; // 0xb78        
        entity2::GameTime_t m_flLastAlertSound; // 0xb7c        
        [[maybe_unused]] std::uint8_t pad_0xb80[0x4]; // 0xb80
        int16_t m_nSentryLevel; // 0xb84        
        [[maybe_unused]] std::uint8_t pad_0xb86[0x2]; // 0xb86
        Vector m_vecForward; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb94[0x4];
        
        // Datamap fields:
        // void EnableAttacking; // 0x0
        // void DisableAttacking; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_BaseDefenseSentry because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_BaseDefenseSentry) == 0xb98);
};
