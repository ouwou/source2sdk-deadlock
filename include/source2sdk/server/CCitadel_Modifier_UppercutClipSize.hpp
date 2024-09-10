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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_UppercutClipSize : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x38]; // 0xc8
        int32_t m_nPreClipSize; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_UppercutClipSize because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_UppercutClipSize) == 0x108);
};
