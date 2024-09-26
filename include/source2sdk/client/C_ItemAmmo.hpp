#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb70
    // Has VTable
    #pragma pack(push, 1)
    class C_ItemAmmo : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb50[0x20];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_ItemAmmo) == 0xb70);
};
