#pragma once
#include "pulse_runtime_lib/PulseCursorID_t.hpp"
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "pulse_runtime_lib/PulseGraphInstanceID_t.hpp"
#include <cstdint>
namespace source2sdk::pulse_runtime_lib
{
	struct PulseGraphExecutionHistoryCursorDesc_t;
};
namespace source2sdk::pulse_runtime_lib
{
	struct PulseGraphExecutionHistoryEntry_t;
};
namespace source2sdk::pulse_runtime_lib
{
	struct PulseGraphExecutionHistoryNodeDesc_t;
};

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MGetKV3ClassDefaults
	class CPulseGraphExecutionHistory
	{
	public:
		pulse_runtime_lib::PulseGraphInstanceID_t m_nInstanceID; // 0x0		
		CUtlString m_strFileName; // 0x8		
		CUtlVector<pulse_runtime_lib::PulseGraphExecutionHistoryEntry_t*> m_vecHistory; // 0x10		
		CUtlOrderedMap<pulse_runtime_lib::PulseDocNodeID_t,pulse_runtime_lib::PulseGraphExecutionHistoryNodeDesc_t*> m_mapCellDesc; // 0x28		
		CUtlOrderedMap<pulse_runtime_lib::PulseCursorID_t,pulse_runtime_lib::PulseGraphExecutionHistoryCursorDesc_t*> m_mapCursorDesc; // 0x50		
	};
};
