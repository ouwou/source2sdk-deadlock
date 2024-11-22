#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x240
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletFlurry : public client::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0xa8]; // 0x188
        client::ParticleIndex_t m_nEffectId; // 0x230        
        entity2::GameTime_t m_flNextSequenceChange; // 0x234        
        int32_t m_nCurrentPose; // 0x238        
        [[maybe_unused]] std::uint8_t pad_0x23c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BulletFlurry) == 0x240);
};
