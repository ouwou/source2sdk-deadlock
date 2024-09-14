#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Size: 0xcf8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_Charge_Mastery : public client::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc88[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Item_Charge_Mastery) == 0xcf8);
};
