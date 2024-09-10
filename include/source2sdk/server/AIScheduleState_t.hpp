#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/TaskStatus_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct AIScheduleState_t
    {
    public:
        int32_t m_nCurTask; // 0x0        
        server::TaskStatus_t m_nTaskStatus; // 0x4        
        entity2::GameTime_t m_flTimeStarted; // 0x8        
        entity2::GameTime_t m_flTimeCurTaskStarted; // 0xc        
        int64_t m_taskFailureCode; // 0x10        
        int32_t m_nTaskInterrupt; // 0x18        
        bool m_bScheduleWasInterrupted; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AIScheduleState_t, m_nCurTask) == 0x0);
    static_assert(offsetof(AIScheduleState_t, m_nTaskStatus) == 0x4);
    static_assert(offsetof(AIScheduleState_t, m_flTimeStarted) == 0x8);
    static_assert(offsetof(AIScheduleState_t, m_flTimeCurTaskStarted) == 0xc);
    static_assert(offsetof(AIScheduleState_t, m_taskFailureCode) == 0x10);
    static_assert(offsetof(AIScheduleState_t, m_nTaskInterrupt) == 0x18);
    static_assert(offsetof(AIScheduleState_t, m_bScheduleWasInterrupted) == 0x1c);
    
    static_assert(sizeof(AIScheduleState_t) == 0x20);
};
