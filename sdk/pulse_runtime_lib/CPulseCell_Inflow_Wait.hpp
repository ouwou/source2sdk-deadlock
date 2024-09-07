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
	// MPulseCellOutflowHookInfo "Wait "
	// MPropertyFriendlyName "Wait"
	// MPropertyDescription "Causes each execution cursor to pause at this node for a fixed period of time. Each cursor will wake up and resume execution when the time expires, unless aborted or early-woken."
	// MPulseEditorHeaderIcon "tools/images/pulse_editor/inflow_wait.png"
	// MPulseEditorIsControlFlowNode
	class CPulseCell_Inflow_Wait : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x48		
	};
};
