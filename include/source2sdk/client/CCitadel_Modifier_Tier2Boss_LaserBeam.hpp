#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier2Boss_LaserBeam : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xa8]; // 0xc0
        bool m_bPreview; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x169[0xb]; // 0x169
        entity2::GameTime_t m_flSoundStartTime; // 0x174        
        [[maybe_unused]] std::uint8_t pad_0x178[0x4]; // 0x178
        Vector m_vStart; // 0x17c        
        Vector m_vEnd; // 0x188        
        Vector m_vPrevEnd; // 0x194        
        float m_flAngleBetweenTrace; // 0x1a0        
        float m_flDamagePerTick; // 0x1a4        
        float m_flCreepDamagePerTick; // 0x1a8        
        entity2::GameTime_t m_flNextDamageTick; // 0x1ac        
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x1b0        
        float m_flDamageTickRate; // 0x1c8        
        entity2::GameTime_t m_flLastShakeTime; // 0x1cc        
        bool m_bSweepRightFirst; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x3]; // 0x1d1
        QAngle m_angBeamAim; // 0x1d4        
        Vector m_vecBeamTarget; // 0x1e0        
        entity2::GameTime_t m_flLastBeamUpdateTime; // 0x1ec        
        [[maybe_unused]] std::uint8_t pad_0x1f0[0x18]; // 0x1f0
        entity2::GameTime_t m_flTargetingTaskStartTime; // 0x208        
        float m_flTrackVel; // 0x20c        
        [[maybe_unused]] std::uint8_t pad_0x210[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x2f0);
};
