#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
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
    // Size: 0x1e8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletFlurry : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xe0]; // 0xc0
        float m_flRadius; // 0x1a0        
        [[maybe_unused]] std::uint8_t pad_0x1a4[0x4]; // 0x1a4
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0x1a8        
        int32_t m_nNumPlayersKilled; // 0x1c0        
        int32_t m_nShootIndex; // 0x1c4        
        int32_t m_nShootIndexNPC; // 0x1c8        
        int32_t m_nBurstShots; // 0x1cc        
        entity2::GameTime_t m_flNextAttackTime; // 0x1d0        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x1d4        
        client::ParticleIndex_t m_nEffectId; // 0x1d8        
        entity2::GameTime_t m_flNextSequenceChange; // 0x1dc        
        int32_t m_nCurrentPose; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BulletFlurry) == 0x1e8);
};
