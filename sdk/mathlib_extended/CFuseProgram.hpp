#pragma once
#include "mathlib_extended/FuseVariableIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	class CFuseProgram
	{
	public:
		CUtlVector<uint8_t> m_programBuffer; // 0x0		
		CUtlVector<mathlib_extended::FuseVariableIndex_t> m_variablesRead; // 0x18		
		CUtlVector<mathlib_extended::FuseVariableIndex_t> m_variablesWritten; // 0x30		
		int32_t m_nMaxTempVarsUsed; // 0x48		
	};
};
