#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseShield.hpp"
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
    class CCitadel_Modifier_GalvanicStormTechShield : public server::CCitadel_Modifier_BaseShield
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_GalvanicStormTechShield) == 0x138);
};
