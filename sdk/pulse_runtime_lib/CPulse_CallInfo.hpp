#pragma once
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
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
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	class CPulse_CallInfo
	{
	public:
		CUtlSymbolLarge m_PortName; // 0x0		
		pulse_runtime_lib::PulseDocNodeID_t m_nEditorNodeID; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		pulse_runtime_lib::PulseRegisterMap_t m_RegisterMap; // 0x10		
		pulse_runtime_lib::PulseDocNodeID_t m_CallMethodID; // 0x30		
		pulse_runtime_lib::PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34		
		int32_t m_nSrcInstruction; // 0x38		
	};
};
