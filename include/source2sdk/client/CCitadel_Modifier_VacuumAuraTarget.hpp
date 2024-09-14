#pragma once
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"
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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_VacuumAuraTarget : public client::CCitadel_Modifier_Stunned
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        float m_flMaxDist; // 0x138        
        Vector m_vecOffsetDir; // 0x13c        
        Vector m_vecStartPosition; // 0x148        
        float m_flAOERadius; // 0x154        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VacuumAuraTarget) == 0x158);
};
