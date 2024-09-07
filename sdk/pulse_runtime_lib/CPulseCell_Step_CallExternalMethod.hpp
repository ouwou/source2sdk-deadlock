#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "pulse_runtime_lib/CPulseRuntimeMethodArg.hpp"
#include "pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include "pulse_runtime_lib/PulseMethodCallMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0xa0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo
	// MPulseCellWithCustomDocNode
	class CPulseCell_Step_CallExternalMethod : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		CUtlSymbolLarge m_MethodName; // 0x48		
		CUtlSymbolLarge m_GameBlackboard; // 0x50		
		CUtlLeanVector<pulse_runtime_lib::CPulseRuntimeMethodArg> m_ExpectedArgs; // 0x58		
		pulse_runtime_lib::PulseMethodCallMode_t m_nAsyncCallMode; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
	public:
		pulse_runtime_lib::CPulse_ResumePoint m_OnFinished; // 0x70		
	};
};
