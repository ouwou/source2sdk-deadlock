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
    // Size: 0xb90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb48[0xc]; // 0xb48
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xb54        
        entity2::GameTime_t m_flNextAttackTime; // 0xb58        
        float m_flAttackCone; // 0xb5c        
        float m_flAttackDelay; // 0xb60        
        entity2::GameTime_t m_flLastAlertSound; // 0xb64        
        float m_flTrackingSpeed; // 0xb68        
        float m_flDeployTime; // 0xb6c        
        [[maybe_unused]] std::uint8_t pad_0xb70[0xa]; // 0xb70
        bool m_bHadEnemy; // 0xb7a        
        bool m_bLockedOn; // 0xb7b        
        [[maybe_unused]] std::uint8_t pad_0xb7c[0x10]; // 0xb7c
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xb8c        
        
        // Datamap fields:
        // float m_flLifeTime; // 0xb74
        // void m_flSpawnTime; // 0xb70
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentry) == 0xb90);
};
