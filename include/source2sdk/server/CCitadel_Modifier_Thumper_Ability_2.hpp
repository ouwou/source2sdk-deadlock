#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Thumper_Ability_2 : public server::CCitadelModifier
    {
    public:
        Vector m_vLastPosition; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd4[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_Ability_2 because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Thumper_Ability_2) == 0x1b8);
};
