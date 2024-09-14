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
    // Size: 0x138
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ColossusActive : public server::CCitadelModifier
    {
    public:
        float m_flOriginalModelScale; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ColossusActive because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ColossusActive) == 0x138);
};
