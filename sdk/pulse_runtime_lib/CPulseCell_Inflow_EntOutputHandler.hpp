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
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo
	// MPulseCellWithCustomDocNode
	class CPulseCell_Inflow_EntOutputHandler : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
	{
	public:
		CUtlSymbolLarge m_SourceEntity; // 0x70		
		CUtlSymbolLarge m_SourceOutput; // 0x78		
		CUtlSymbolLarge m_TargetInput; // 0x80		
		CPulseValueFullType m_ExpectedParamType; // 0x88		
	};
};
