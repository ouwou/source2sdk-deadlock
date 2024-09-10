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
    // Size: 0x250
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bolo : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x188];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CCitadel_Modifier_Bolo) == 0x250);
};
