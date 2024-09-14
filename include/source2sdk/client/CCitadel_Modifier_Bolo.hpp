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
    // Size: 0x250
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bolo : public client::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_hRingEffect; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bolo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bolo) == 0x250);
};
