#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x1b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatueTarget : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xc]; // 0xc0
        int32_t m_iStatueID; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xd0[0xe8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatueTarget because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatueTarget) == 0x1b8);
};
