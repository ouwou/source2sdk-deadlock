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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Containment_Victim : public client::CCitadelModifier
    {
    public:
        float m_flTetherRadius; // 0xc0        
        Vector m_vecOrigin; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Containment_Victim because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Containment_Victim) == 0x108);
};
