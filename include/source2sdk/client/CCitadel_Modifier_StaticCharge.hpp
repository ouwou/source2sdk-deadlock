#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x140
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_StaticCharge : public client::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_hRingEffect; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x74]; // 0xc4
        float m_flRadius; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x13c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StaticCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StaticCharge) == 0x140);
};
