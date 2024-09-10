#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xcd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Nikuman : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CCitadel_Ability_Nikuman) == 0xcd0);
};
