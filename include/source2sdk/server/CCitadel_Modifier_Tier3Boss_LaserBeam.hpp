#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Tier3Boss_Base.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier3Boss_LaserBeam : public server::CCitadel_Modifier_Tier3Boss_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x8]; // 0xc8
        entity2::GameTime_t m_flSoundStartTime; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        Vector m_vStart; // 0xd8        
        Vector m_vEnd; // 0xe4        
        Vector m_vPrevEnd; // 0xf0        
        float m_flAngleBetweenTrace; // 0xfc        
        float m_flPlayerDamagePerTick; // 0x100        
        float m_flNPCDamagePerTick; // 0x104        
        entity2::GameTime_t m_flNextDamageTick; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x4]; // 0x10c
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x110        
        float m_flDamageTickRate; // 0x128        
        entity2::GameTime_t m_flLastShakeTime; // 0x12c        
        bool m_bSweepRightFirst; // 0x130        
        [[maybe_unused]] std::uint8_t pad_0x131[0x3]; // 0x131
        Vector m_vecBeamTarget; // 0x134        
        entity2::GameTime_t m_flLastBeamUpdateTime; // 0x140        
        Vector m_vecEnemyPosition; // 0x144        
        int32_t m_nTrackingIndex; // 0x150        
        bool m_bPreviewMode; // 0x154        
        modellib::AttachmentHandle_t m_hAttachment; // 0x155        
        [[maybe_unused]] std::uint8_t pad_0x156[0x72];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier3Boss_LaserBeam because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Tier3Boss_LaserBeam) == 0x1c8);
};
