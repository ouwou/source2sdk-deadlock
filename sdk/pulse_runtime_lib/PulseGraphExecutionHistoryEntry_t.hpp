#pragma once
#include "pulse_runtime_lib/PulseCursorID_t.hpp"
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PulseGraphExecutionHistoryEntry_t
	{
	public:
		pulse_runtime_lib::PulseCursorID_t nCursorID; // 0x0		
		pulse_runtime_lib::PulseDocNodeID_t nEditorID; // 0x4		
		float flExecTime; // 0x8		
		uint32_t unFlags; // 0xc		
		CUtlSymbolLarge tagName; // 0x10		
	};
};
