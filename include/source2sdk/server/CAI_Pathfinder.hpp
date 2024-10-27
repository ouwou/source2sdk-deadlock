#pragma once
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x5930
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Pathfinder
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x5918]; // 0x0
        float m_flNavMaxDetour; // 0x5918        
        [[maybe_unused]] std::uint8_t pad_0x591c[0x14];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_Pathfinder, m_flNavMaxDetour) == 0x5918);
    
    static_assert(sizeof(CAI_Pathfinder) == 0x5930);
};
