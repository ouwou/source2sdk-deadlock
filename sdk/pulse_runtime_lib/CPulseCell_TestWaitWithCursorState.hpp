#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "TestDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "m_WakeResume "
	class CPulseCell_TestWaitWithCursorState : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		// MPulseCellOutflow_IsDefault
		pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x48		
		pulse_runtime_lib::CPulse_ResumePoint m_WakeCancel; // 0x78		
		pulse_runtime_lib::CPulse_ResumePoint m_WakeFail; // 0xa8		
	};
};
