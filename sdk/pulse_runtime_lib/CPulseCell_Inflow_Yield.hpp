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
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "m_UnyieldResume "
	// MPulseCellWithCustomDocNode
	class CPulseCell_Inflow_Yield : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		pulse_runtime_lib::CPulse_ResumePoint m_UnyieldResume; // 0x48		
	};
};
