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
    // Size: 0xc08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbc0[0xc]; // 0xbc0
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xbcc        
        entity2::GameTime_t m_flNextAttackTime; // 0xbd0        
        float m_flAttackCone; // 0xbd4        
        float m_flAttackDelay; // 0xbd8        
        entity2::GameTime_t m_flLastAlertSound; // 0xbdc        
        float m_flTrackingSpeed; // 0xbe0        
        float m_flDeployTime; // 0xbe4        
        [[maybe_unused]] std::uint8_t pad_0xbe8[0xa]; // 0xbe8
        bool m_bHadEnemy; // 0xbf2        
        bool m_bLockedOn; // 0xbf3        
        [[maybe_unused]] std::uint8_t pad_0xbf4[0x10]; // 0xbf4
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xc04        
        
        // Datamap fields:
        // float m_flLifeTime; // 0xbec
        // void m_flSpawnTime; // 0xbe8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentry) == 0xc08);
};
