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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Passive_Camouflage : public client::CCitadelModifier
    {
    public:
        float m_flRate; // 0xc0        
        Vector m_vLastPosition; // 0xc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Passive_Camouflage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Passive_Camouflage) == 0xd0);
};
