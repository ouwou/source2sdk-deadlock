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
    // Size: 0x1c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier3Boss_LaserBeam : public server::CCitadel_Modifier_Tier3Boss_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x8]; // 0xc0
        entity2::GameTime_t m_flSoundStartTime; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4]; // 0xcc
        Vector m_vStart; // 0xd0        
        Vector m_vEnd; // 0xdc        
        Vector m_vPrevEnd; // 0xe8        
        float m_flAngleBetweenTrace; // 0xf4        
        float m_flPlayerDamagePerTick; // 0xf8        
        float m_flNPCDamagePerTick; // 0xfc        
        entity2::GameTime_t m_flNextDamageTick; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0x4]; // 0x104
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x108        
        float m_flDamageTickRate; // 0x120        
        entity2::GameTime_t m_flLastShakeTime; // 0x124        
        bool m_bSweepRightFirst; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x129[0x3]; // 0x129
        Vector m_vecBeamTarget; // 0x12c        
        entity2::GameTime_t m_flLastBeamUpdateTime; // 0x138        
        Vector m_vecEnemyPosition; // 0x13c        
        int32_t m_nTrackingIndex; // 0x148        
        bool m_bPreviewMode; // 0x14c        
        modellib::AttachmentHandle_t m_hAttachment; // 0x14d        
        [[maybe_unused]] std::uint8_t pad_0x14e[0x72];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier3Boss_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Tier3Boss_LaserBeam) == 0x1c0);
};
