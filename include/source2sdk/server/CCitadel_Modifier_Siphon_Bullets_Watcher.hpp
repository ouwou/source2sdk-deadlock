#pragma once
#include "source2sdk/server/CCitadel_Modifier_StatStealBase.hpp"
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
    // Size: 0x1c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Siphon_Bullets_Watcher : public server::CCitadel_Modifier_StatStealBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0x38];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_Siphon_Bullets_Watcher) == 0x1c0);
};
