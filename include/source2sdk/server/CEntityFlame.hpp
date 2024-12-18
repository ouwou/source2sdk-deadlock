#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x518
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
    // static metadata: MNetworkVarNames "bool m_bCheapEffect"
    #pragma pack(push, 1)
    class CEntityFlame : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntAttached;
        char m_hEntAttached[0x4]; // 0x4e0        
        // metadata: MNetworkEnable
        bool m_bCheapEffect; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3]; // 0x4e5
        float m_flSize; // 0x4e8        
        bool m_bUseHitboxes; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x4ed[0x3]; // 0x4ed
        int32_t m_iNumHitboxFires; // 0x4f0        
        float m_flHitboxFireScale; // 0x4f4        
        entity2::GameTime_t m_flLifetime; // 0x4f8        
        // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttacker;
        char m_hAttacker[0x4]; // 0x4fc        
        int32_t m_iDangerSound; // 0x500        
        float m_flDirectDamagePerSecond; // 0x504        
        int32_t m_iCustomDamageType; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0xc];
        
        // Datamap fields:
        // void m_hPlayingSound; // 0x50c
        // void CEntityFlameFlameThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEntityFlame because it is not a standard-layout class
    static_assert(sizeof(CEntityFlame) == 0x518);
};
