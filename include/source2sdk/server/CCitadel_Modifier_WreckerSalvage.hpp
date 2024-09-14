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
    class CCitadel_Modifier_WreckerSalvage : public server::CCitadelModifier
    {
    public:
        float m_flDPS; // 0xc0        
        Vector m_vLiftTarget; // 0xc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_WreckerSalvage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_WreckerSalvage) == 0xd0);
};
