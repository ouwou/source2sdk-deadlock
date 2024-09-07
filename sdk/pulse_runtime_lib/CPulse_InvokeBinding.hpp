#pragma once
#include "pulse_runtime_lib/PulseRegisterMap_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeCellIndex_t.hpp"
#include "pulse_runtime_lib/PulseRuntimeChunkIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x88
	// 
	// MGetKV3ClassDefaults
	class CPulse_InvokeBinding
	{
	public:
		pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x0		
		CUtlSymbolLarge m_FuncName; // 0x20		
		pulse_runtime_lib::PulseRuntimeCellIndex_t m_nCellIndex; // 0x28		
		pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c		
		int32_t m_nSrcInstruction; // 0x30		
	};
};
