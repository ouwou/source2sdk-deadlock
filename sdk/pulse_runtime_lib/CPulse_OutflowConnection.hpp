#pragma once
#include "pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x30
	class CPulse_OutflowConnection
	{
	public:
		CUtlSymbolLarge m_SourceOutflowName; // 0x0		
		pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8		
		int32_t m_nInstruction; // 0xc		
		pulse_runtime_lib::PulseRegisterMap_t m_OutflowRegisterMap; // 0x10		
	};
};
