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
    // Size: 0x168
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_VacuumAuraTarget : public server::CCitadel_Modifier_Stunned
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd0[0x70]; // 0xd0
        float m_flMaxDist; // 0x140        
        Vector m_vecOffsetDir; // 0x144        
        Vector m_vecStartPosition; // 0x150        
        float m_flAOERadius; // 0x15c        
        [[maybe_unused]] std::uint8_t pad_0x160[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_VacuumAuraTarget) == 0x168);
};
