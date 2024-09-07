#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "pulse_runtime_lib/CPulse_ResumePoint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_system
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPulseEditorIsControlFlowNode
	class CPulseCell_WaitForCursorsWithTagBase : public pulse_runtime_lib::CPulseCell_BaseYieldingInflow
	{
	public:
		// MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
		int32_t m_nCursorsAllowedToWait; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		pulse_runtime_lib::CPulse_ResumePoint m_WaitComplete; // 0x50		
	};
};
