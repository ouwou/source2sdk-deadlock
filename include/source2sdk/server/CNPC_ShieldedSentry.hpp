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
    // Size: 0xbb8
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
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb58[0xc]; // 0xb58
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xb64        
        entity2::GameTime_t m_flNextAttackTime; // 0xb68        
        float m_flAttackCone; // 0xb6c        
        float m_flAttackDelay; // 0xb70        
        entity2::GameTime_t m_flLastAlertSound; // 0xb74        
        float m_flTrackingSpeed; // 0xb78        
        float m_flDeployTime; // 0xb7c        
        [[maybe_unused]] std::uint8_t pad_0xb80[0xa]; // 0xb80
        bool m_bHadEnemy; // 0xb8a        
        bool m_bLockedOn; // 0xb8b        
        [[maybe_unused]] std::uint8_t pad_0xb8c[0x8]; // 0xb8c
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xb94        
        [[maybe_unused]] std::uint8_t pad_0xb98[0x20];
        
        // Datamap fields:
        // float m_flLifeTime; // 0xb84
        // void m_flSpawnTime; // 0xb80
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_ShieldedSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_ShieldedSentry) == 0xbb8);
};
