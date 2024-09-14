#pragma once
#include "source2sdk/client/CCitadel_Modifier_Invis.hpp"
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
    // Size: 0x2e0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Slork_Invis : public client::CCitadel_Modifier_Invis
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x268[0x70]; // 0x268
        bool m_bHasGoneFullyInvis; // 0x2d8        
        [[maybe_unused]] std::uint8_t pad_0x2d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Slork_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Slork_Invis) == 0x2e0);
};
