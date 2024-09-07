#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/TaskStatus_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	// Has Trivial Destructor
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
	};
};
