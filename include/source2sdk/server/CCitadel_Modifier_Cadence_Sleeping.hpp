#pragma once
#include "source2sdk/server/CCitadel_Modifier_Sleep.hpp"
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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Cadence_Sleeping : public server::CCitadel_Modifier_Sleep
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe8[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_Cadence_Sleeping) == 0x158);
};
