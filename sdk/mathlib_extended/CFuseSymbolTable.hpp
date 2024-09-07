#pragma once
#include "mathlib_extended/ConstantInfo_t.hpp"
#include "mathlib_extended/FunctionInfo_t.hpp"
#include "mathlib_extended/VariableInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0xb0
	// 
	// MGetKV3ClassDefaults
	class CFuseSymbolTable
	{
	public:
		CUtlVector<mathlib_extended::ConstantInfo_t> m_constants; // 0x0		
		CUtlVector<mathlib_extended::VariableInfo_t> m_variables; // 0x18		
		CUtlVector<mathlib_extended::FunctionInfo_t> m_functions; // 0x30		
		CUtlHashtable<CUtlStringToken,int32_t> m_constantMap; // 0x48		
		CUtlHashtable<CUtlStringToken,int32_t> m_variableMap; // 0x68		
		CUtlHashtable<CUtlStringToken,int32_t> m_functionMap; // 0x88		
	};
};
