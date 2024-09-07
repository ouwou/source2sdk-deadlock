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
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "m_Outputs "
	// MPulseCellWithCustomDocNode
	class CPulseCell_Outflow_CycleShuffled : public pulse_runtime_lib::CPulseCell_BaseFlow
	{
	public:
		CUtlVector<pulse_runtime_lib::CPulse_OutflowConnection> m_Outputs; // 0x48		
	};
};
