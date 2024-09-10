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
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Thumper_2_Aura : public server::CCitadelModifierAura
    {
    public:
        Vector m_vecOrigin; // 0xe8        
        Vector m_vecWorldSpaceMins; // 0xf4        
        Vector m_vecWorldSpaceMaxs; // 0x100        
        float m_flBarbedWireAuraRadius; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x110[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_2_Aura because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Thumper_2_Aura) == 0x180);
};
