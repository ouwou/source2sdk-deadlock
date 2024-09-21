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
    // Size: 0xb88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb40[0xc]; // 0xb40
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xb4c        
        entity2::GameTime_t m_flNextAttackTime; // 0xb50        
        float m_flAttackCone; // 0xb54        
        float m_flAttackDelay; // 0xb58        
        entity2::GameTime_t m_flLastAlertSound; // 0xb5c        
        float m_flTrackingSpeed; // 0xb60        
        float m_flDeployTime; // 0xb64        
        [[maybe_unused]] std::uint8_t pad_0xb68[0xa]; // 0xb68
        bool m_bHadEnemy; // 0xb72        
        bool m_bLockedOn; // 0xb73        
        [[maybe_unused]] std::uint8_t pad_0xb74[0x10]; // 0xb74
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xb84        
        
        // Datamap fields:
        // float m_flLifeTime; // 0xb6c
        // void m_flSpawnTime; // 0xb68
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentry) == 0xb88);
};
