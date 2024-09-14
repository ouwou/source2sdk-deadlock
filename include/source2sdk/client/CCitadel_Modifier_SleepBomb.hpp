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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_SleepBomb : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x150]; // 0xc0
        Vector m_vecOrigin; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SleepBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_SleepBomb) == 0x220);
};
