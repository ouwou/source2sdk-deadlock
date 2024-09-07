#pragma once
#include "pulse_runtime_lib/CPulse_RegisterInfo.hpp"
#include "pulse_runtime_lib/PGDInstruction_t.hpp"
#include "pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	class CPulse_Chunk
	{
	public:
		CUtlLeanVector<pulse_runtime_lib::PGDInstruction_t> m_Instructions; // 0x0		
		CUtlLeanVector<pulse_runtime_lib::CPulse_RegisterInfo> m_Registers; // 0x10		
		CUtlLeanVector<pulse_runtime_lib::PulseDocNodeID_t> m_InstructionEditorIDs; // 0x20		
	};
};
