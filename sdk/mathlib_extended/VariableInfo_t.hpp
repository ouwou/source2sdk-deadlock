#pragma once
#include "mathlib_extended/FuseVariableAccess_t.hpp"
#include "mathlib_extended/FuseVariableIndex_t.hpp"
#include "mathlib_extended/FuseVariableType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct VariableInfo_t
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlStringToken m_nameToken; // 0x8		
		mathlib_extended::FuseVariableIndex_t m_nIndex; // 0xc		
		uint8_t m_nNumComponents; // 0xe		
		mathlib_extended::FuseVariableType_t m_eVarType; // 0xf		
		mathlib_extended::FuseVariableAccess_t m_eAccess; // 0x10		
	};
};
