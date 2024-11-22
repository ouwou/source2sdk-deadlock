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
    // Size: 0xc58
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
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbf0[0xc]; // 0xbf0
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xbfc        
        entity2::GameTime_t m_flNextAttackTime; // 0xc00        
        float m_flAttackCone; // 0xc04        
        float m_flAttackDelay; // 0xc08        
        entity2::GameTime_t m_flLastAlertSound; // 0xc0c        
        float m_flTrackingSpeed; // 0xc10        
        float m_flDeployTime; // 0xc14        
        [[maybe_unused]] std::uint8_t pad_0xc18[0xa]; // 0xc18
        bool m_bHadEnemy; // 0xc22        
        bool m_bLockedOn; // 0xc23        
        [[maybe_unused]] std::uint8_t pad_0xc24[0x8]; // 0xc24
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xc2c        
        [[maybe_unused]] std::uint8_t pad_0xc30[0x28];
        
        // Datamap fields:
        // float m_flLifeTime; // 0xc1c
        // void m_flSpawnTime; // 0xc18
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_ShieldedSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_ShieldedSentry) == 0xc58);
};
