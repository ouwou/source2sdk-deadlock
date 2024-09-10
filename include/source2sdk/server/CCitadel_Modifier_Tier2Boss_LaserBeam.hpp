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
    // Size: 0x2c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Tier2Boss_LaserBeam : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        bool m_bPreview; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x139[0xb]; // 0x139
        entity2::GameTime_t m_flSoundStartTime; // 0x144        
        [[maybe_unused]] std::uint8_t pad_0x148[0x4]; // 0x148
        Vector m_vStart; // 0x14c        
        Vector m_vEnd; // 0x158        
        Vector m_vPrevEnd; // 0x164        
        float m_flAngleBetweenTrace; // 0x170        
        float m_flDamagePerTick; // 0x174        
        float m_flCreepDamagePerTick; // 0x178        
        entity2::GameTime_t m_flNextDamageTick; // 0x17c        
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x180        
        float m_flDamageTickRate; // 0x198        
        entity2::GameTime_t m_flLastShakeTime; // 0x19c        
        bool m_bSweepRightFirst; // 0x1a0        
        [[maybe_unused]] std::uint8_t pad_0x1a1[0x3]; // 0x1a1
        QAngle m_angBeamAim; // 0x1a4        
        Vector m_vecBeamTarget; // 0x1b0        
        entity2::GameTime_t m_flLastBeamUpdateTime; // 0x1bc        
        [[maybe_unused]] std::uint8_t pad_0x1c0[0x18]; // 0x1c0
        entity2::GameTime_t m_flTargetingTaskStartTime; // 0x1d8        
        float m_flTrackVel; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1e0[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x2c0);
};
