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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ImmobilizeTrapDOT_Thinker : public server::CCitadelModifier
    {
    public:
        float m_flDPS; // 0xc8        
        float m_flRadius; // 0xcc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ImmobilizeTrapDOT_Thinker because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ImmobilizeTrapDOT_Thinker) == 0xd0);
};
