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
    // Size: 0xc18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbd0[0xc]; // 0xbd0
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xbdc        
        entity2::GameTime_t m_flNextAttackTime; // 0xbe0        
        float m_flAttackCone; // 0xbe4        
        float m_flAttackDelay; // 0xbe8        
        entity2::GameTime_t m_flLastAlertSound; // 0xbec        
        float m_flTrackingSpeed; // 0xbf0        
        float m_flDeployTime; // 0xbf4        
        [[maybe_unused]] std::uint8_t pad_0xbf8[0xa]; // 0xbf8
        bool m_bHadEnemy; // 0xc02        
        bool m_bLockedOn; // 0xc03        
        [[maybe_unused]] std::uint8_t pad_0xc04[0x10]; // 0xc04
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xc14        
        
        // Datamap fields:
        // float m_flLifeTime; // 0xbfc
        // void m_flSpawnTime; // 0xbf8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentry) == 0xc18);
};
