#pragma once
#include "pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
#include "pulse_runtime_lib/CPulse_BlackboardReference.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x168
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "m_BlackboardReference "
	// MPulseCellWithCustomDocNode
	class CPulseCell_Inflow_ObservableVariableListener : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
	{
	public:
		pulse_runtime_lib::CPulse_BlackboardReference m_BlackboardReference; // 0x70		
	};
};
