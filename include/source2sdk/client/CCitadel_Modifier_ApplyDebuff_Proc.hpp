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
    // Size: 0x168
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ApplyDebuff_Proc : public client::CCitadel_Modifier_BaseEventProc
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_ApplyDebuff_Proc) == 0x168);
};
