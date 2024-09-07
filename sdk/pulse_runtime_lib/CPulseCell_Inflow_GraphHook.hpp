#pragma once
#include "pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
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
	// MPulseCellOutflowHookInfo "m_HookName "
	// MPulseCellWithCustomDocNode
	class CPulseCell_Inflow_GraphHook : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
	{
	public:
		CUtlSymbolLarge m_HookName; // 0x70		
	};
};
