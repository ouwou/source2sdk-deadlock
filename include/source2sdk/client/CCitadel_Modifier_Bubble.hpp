#pragma once
#include "source2sdk/client/CCitadel_Modifier_Silenced.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1e8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bubble : public client::CCitadel_Modifier_Silenced
    {
    public:
        float m_flDampingFactor; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x11c]; // 0xc4
        client::ParticleIndex_t m_ParticleIndex; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bubble because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bubble) == 0x1e8);
};
