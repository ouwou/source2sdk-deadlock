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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_PsychicLift : public server::CCitadel_Modifier_Stunned
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd0[0x70]; // 0xd0
        Vector m_vecFloatDest; // 0x140        
        Vector m_vecStartingPos; // 0x14c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PsychicLift because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_PsychicLift) == 0x158);
};
