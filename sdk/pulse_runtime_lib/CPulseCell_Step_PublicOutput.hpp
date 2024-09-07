#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "pulse_runtime_lib/PulseRuntimeOutputIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "m_OutputIndex "
	// MPulseCellWithCustomDocNode
	class CPulseCell_Step_PublicOutput : public pulse_runtime_lib::CPulseCell_BaseFlow
	{
	public:
		pulse_runtime_lib::PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48		
	};
};
