#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x140
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HoldingGoldenIdol : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        client::ParticleIndex_t m_iIdolParticle; // 0x138        
        int32_t m_nGoldValue; // 0x13c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HoldingGoldenIdol because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_HoldingGoldenIdol) == 0x140);
};
