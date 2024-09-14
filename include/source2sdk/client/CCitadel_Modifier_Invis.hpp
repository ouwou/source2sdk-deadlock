#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x268
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Invis : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x188]; // 0xc0
        bool m_bInvis; // 0x248        
        [[maybe_unused]] std::uint8_t pad_0x249[0x3]; // 0x249
        entity2::GameTime_t m_flStartInvisTime; // 0x24c        
        bool m_bFullyInvis; // 0x250        
        [[maybe_unused]] std::uint8_t pad_0x251[0x3]; // 0x251
        entity2::GameTime_t m_flLastDamageTaken; // 0x254        
        entity2::GameTime_t m_flLastSpotted; // 0x258        
        client::ParticleIndex_t m_nDetectionRangeRing; // 0x25c        
        client::ParticleIndex_t m_nFullInvisEffect; // 0x260        
        [[maybe_unused]] std::uint8_t pad_0x264[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Invis) == 0x268);
};
