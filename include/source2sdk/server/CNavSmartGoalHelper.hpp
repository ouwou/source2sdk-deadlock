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
    // Size: 0xb0
    // Has VTable
    #pragma pack(push, 1)
    class CNavSmartGoalHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xa8]; // 0x0
        bool m_bExecuteQueuedGoal; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xa9[0x7];
        
        // Datamap fields:
        // void m_pNPC; // 0x8
        // void m_pGoalAutoDoor; // 0x10
        // void m_pGoalPrimary; // 0x20
        // void m_pQueuedSmartGoal; // 0x30
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNavSmartGoalHelper, m_bExecuteQueuedGoal) == 0xa8);
    
    static_assert(sizeof(CNavSmartGoalHelper) == 0xb0);
};
