#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "pulse_runtime_lib/SignatureOutflow_Continue.hpp"
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
	// MCellForDomain "TestDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo ""
	class CPulseCell_Test_MultiOutflow_WithParams : public pulse_runtime_lib::CPulseCell_BaseFlow
	{
	public:
		// MPulseCellOutflow_IsDefault
		pulse_runtime_lib::SignatureOutflow_Continue m_Out1; // 0x48		
		pulse_runtime_lib::SignatureOutflow_Continue m_Out2; // 0x78		
	};
};
