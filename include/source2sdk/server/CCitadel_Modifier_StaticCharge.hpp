#pragma once
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
    class CCitadel_Modifier_StaticCharge : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        float m_flRadius; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x13c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StaticCharge because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_StaticCharge) == 0x140);
};
