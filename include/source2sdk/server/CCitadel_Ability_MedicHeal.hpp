#pragma once
#include "source2sdk/server/CCitadelBaseAbilityServerOnly.hpp"
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
    // Size: 0xc08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_MedicHeal : public server::CCitadelBaseAbilityServerOnly
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x120];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Ability_MedicHeal) == 0xc08);
};
