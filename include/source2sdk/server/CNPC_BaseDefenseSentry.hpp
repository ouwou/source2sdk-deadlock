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
    // Size: 0xc38
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
    #pragma pack(push, 1)
    class CNPC_BaseDefenseSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbd8[0x8]; // 0xbd8
        // metadata: MNetworkEnable
        Vector m_vecUnitStatusOffset; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbec[0x28]; // 0xbec
        float m_flAttackCone; // 0xc14        
        float m_flAttackDelay; // 0xc18        
        entity2::GameTime_t m_flLastAlertSound; // 0xc1c        
        [[maybe_unused]] std::uint8_t pad_0xc20[0x4]; // 0xc20
        int16_t m_nSentryLevel; // 0xc24        
        [[maybe_unused]] std::uint8_t pad_0xc26[0x2]; // 0xc26
        Vector m_vecForward; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc34[0x4];
        
        // Datamap fields:
        // void EnableAttacking; // 0x0
        // void DisableAttacking; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_BaseDefenseSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_BaseDefenseSentry) == 0xc38);
};
