#pragma once
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0x200
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nikuman : public server::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe0[0x118]; // 0xe0
        int32_t m_nTotalSelfHeal; // 0x1f8        
        int32_t m_nTotalTeammateHeal; // 0x1fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nikuman because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nikuman) == 0x200);
};
