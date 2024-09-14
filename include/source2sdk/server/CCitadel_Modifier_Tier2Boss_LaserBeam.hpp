#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x2b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier2Boss_LaserBeam : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        bool m_bPreview; // 0x130        
        [[maybe_unused]] std::uint8_t pad_0x131[0xb]; // 0x131
        entity2::GameTime_t m_flSoundStartTime; // 0x13c        
        [[maybe_unused]] std::uint8_t pad_0x140[0x4]; // 0x140
        Vector m_vStart; // 0x144        
        Vector m_vEnd; // 0x150        
        Vector m_vPrevEnd; // 0x15c        
        float m_flAngleBetweenTrace; // 0x168        
        float m_flDamagePerTick; // 0x16c        
        float m_flCreepDamagePerTick; // 0x170        
        entity2::GameTime_t m_flNextDamageTick; // 0x174        
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x178        
        float m_flDamageTickRate; // 0x190        
        entity2::GameTime_t m_flLastShakeTime; // 0x194        
        bool m_bSweepRightFirst; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x199[0x3]; // 0x199
        QAngle m_angBeamAim; // 0x19c        
        Vector m_vecBeamTarget; // 0x1a8        
        entity2::GameTime_t m_flLastBeamUpdateTime; // 0x1b4        
        [[maybe_unused]] std::uint8_t pad_0x1b8[0x18]; // 0x1b8
        entity2::GameTime_t m_flTargetingTaskStartTime; // 0x1d0        
        float m_flTrackVel; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d8[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x2b8);
};
