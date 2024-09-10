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
    class CCitadel_Modifier_Magic_Clarity_Buff : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0xa8]; // 0xc8
        uint64_t m_iAbilityID; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x178[0x38]; // 0x178
        bool m_bAbilityLocked; // 0x1b0        
        [[maybe_unused]] std::uint8_t pad_0x1b1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Magic_Clarity_Buff because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Magic_Clarity_Buff) == 0x1b8);
};
