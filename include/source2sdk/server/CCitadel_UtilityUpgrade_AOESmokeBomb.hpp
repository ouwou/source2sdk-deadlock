#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_AOESmokeBomb : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb18[0x38];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_UtilityUpgrade_AOESmokeBomb) == 0xb50);
};
