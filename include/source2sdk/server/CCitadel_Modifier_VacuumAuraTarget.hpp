#pragma once
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
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
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_VacuumAuraTarget : public server::CCitadel_Modifier_Stunned
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        float m_flMaxDist; // 0x138        
        Vector m_vecOffsetDir; // 0x13c        
        Vector m_vecStartPosition; // 0x148        
        float m_flAOERadius; // 0x154        
        [[maybe_unused]] std::uint8_t pad_0x158[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VacuumAuraTarget) == 0x160);
};
