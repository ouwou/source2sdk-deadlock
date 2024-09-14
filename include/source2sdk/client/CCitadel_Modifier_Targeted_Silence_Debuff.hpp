#pragma once
#include "source2sdk/client/CCitadel_Modifier_Silenced.hpp"
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
    // Size: 0xf8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Targeted_Silence_Debuff : public client::CCitadel_Modifier_Silenced
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x38];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_Targeted_Silence_Debuff) == 0xf8);
};
