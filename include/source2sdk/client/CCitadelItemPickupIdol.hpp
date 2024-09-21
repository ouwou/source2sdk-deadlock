#pragma once
#include "source2sdk/client/C_CitadelItemPickup.hpp"
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
    // Size: 0xb88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelItemPickupIdol : public client::C_CitadelItemPickup
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb80[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadelItemPickupIdol) == 0xb88);
};
