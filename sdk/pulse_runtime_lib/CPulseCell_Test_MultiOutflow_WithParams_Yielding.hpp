#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "pulse_runtime_lib/SignatureOutflow_Continue.hpp"
#include "pulse_runtime_lib/SignatureOutflow_Resume.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "TestDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo ""
	class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		// MPulseCellOutflow_IsDefault
		pulse_runtime_lib::SignatureOutflow_Continue m_Out1; // 0x48		
		pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild1; // 0x78		
		pulse_runtime_lib::SignatureOutflow_Continue m_AsyncChild2; // 0xa8		
		pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume1; // 0xd8		
		pulse_runtime_lib::SignatureOutflow_Resume m_YieldResume2; // 0x108		
	};
};
