#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xb60
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_StormCloud : public server::CCitadelBaseAbility
    {
    public:
        bool m_bApplyingVerticalAirDrag; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xae9[0x77];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StormCloud) == 0xb60);
};
