#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"
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
    // Size: 0x210
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_SiphonBullets : public client::CCitadel_Modifier_BaseEventProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x168[0xa8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CModifier_SiphonBullets) == 0x210);
};
