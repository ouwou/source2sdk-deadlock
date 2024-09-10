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
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x30
    // Has VTable
    #pragma pack(push, 1)
    class CNavSmartGoalHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30];
        // Datamap fields:
        // void m_pNPC; // 0x8
        // void m_pGoalAutoDoor; // 0x10
        // void m_pGoalPrimary; // 0x20
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CNavSmartGoalHelper) == 0x30);
};
