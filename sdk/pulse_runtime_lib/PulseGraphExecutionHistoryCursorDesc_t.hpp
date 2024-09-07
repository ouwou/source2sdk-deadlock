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
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct PulseGraphExecutionHistoryCursorDesc_t
	{
	public:
		CUtlVector<pulse_runtime_lib::PulseCursorID_t> vecAncestorCursorIDs; // 0x0		
		pulse_runtime_lib::PulseDocNodeID_t nSpawnNodeID; // 0x18		
		pulse_runtime_lib::PulseDocNodeID_t nRetiredAtNodeID; // 0x1c		
		float flLastReferenced; // 0x20		
		int32_t nLastValidEntryIdx; // 0x24		
	};
};
