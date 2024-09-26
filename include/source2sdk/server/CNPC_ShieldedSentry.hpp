#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
    // Size: 0xbc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_ShieldedSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb60[0xc]; // 0xb60
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xb6c        
        entity2::GameTime_t m_flNextAttackTime; // 0xb70        
        float m_flAttackCone; // 0xb74        
        float m_flAttackDelay; // 0xb78        
        entity2::GameTime_t m_flLastAlertSound; // 0xb7c        
        float m_flTrackingSpeed; // 0xb80        
        float m_flDeployTime; // 0xb84        
        [[maybe_unused]] std::uint8_t pad_0xb88[0xa]; // 0xb88
        bool m_bHadEnemy; // 0xb92        
        bool m_bLockedOn; // 0xb93        
        [[maybe_unused]] std::uint8_t pad_0xb94[0x8]; // 0xb94
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xb9c        
        [[maybe_unused]] std::uint8_t pad_0xba0[0x20];
        
        // Datamap fields:
        // float m_flLifeTime; // 0xb8c
        // void m_flSpawnTime; // 0xb88
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_ShieldedSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_ShieldedSentry) == 0xbc0);
};
