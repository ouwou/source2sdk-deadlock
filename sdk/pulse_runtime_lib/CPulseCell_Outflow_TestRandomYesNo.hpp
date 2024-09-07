#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "[Test] Random Yes/No Outflow "
	// MPropertyFriendlyName "[Test] Random Yes/No Outflow"
	// MPropertyDescription "Test node that randomly picks between two outflows."
	class CPulseCell_Outflow_TestRandomYesNo : public pulse_runtime_lib::CPulseCell_BaseFlow
	{
	public:
		// MPropertyFriendlyName "Yes"
		// MPropertyDescription "Randomly taken half of the time"
		pulse_runtime_lib::CPulse_OutflowConnection m_Yes; // 0x48		
		// MPropertyFriendlyName "No"
		// MPropertyDescription "Randomly taken half of the time"
		pulse_runtime_lib::CPulse_OutflowConnection m_No; // 0x78		
	};
};
