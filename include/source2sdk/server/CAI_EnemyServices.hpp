#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x68
    // Has VTable
    #pragma pack(push, 1)
    class CAI_EnemyServices : public client::CAI_Component
    {
    public:
        // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemy;
        char m_hEnemy[0x4]; // 0x40        
        // m_hLastEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastEnemy;
        char m_hLastEnemy[0x4]; // 0x44        
        entity2::GameTime_t m_flTimeEnemyAcquired; // 0x48        
        bool m_bHasEnemyAcquired; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3]; // 0x4d
        entity2::GameTime_t m_flTimeLastHadEnemy; // 0x50        
        bool m_bHasLastHadEnemy; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        int32_t m_nEnemiesSerialNumber; // 0x58        
        // m_hEnemyOccluder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyOccluder;
        char m_hEnemyOccluder[0x4]; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8];
        
        // Datamap fields:
        // void m_pEnemies; // 0x60
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_EnemyServices because it is not a standard-layout class
    static_assert(sizeof(CAI_EnemyServices) == 0x68);
};
