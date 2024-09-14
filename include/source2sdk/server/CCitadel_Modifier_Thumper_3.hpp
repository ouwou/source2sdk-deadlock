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
    // Size: 0x138
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Thumper_3 : public server::CCitadelModifier
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0xc0        
        float m_flVisibilityTime; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_3 because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Thumper_3) == 0x138);
};
