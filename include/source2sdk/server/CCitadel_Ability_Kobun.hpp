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
    // Size: 0xc58
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Kobun : public server::CCitadelBaseAbility
    {
    public:
        bool m_bFlipOffset; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xae9[0x16f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Kobun because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Kobun) == 0xc58);
};
