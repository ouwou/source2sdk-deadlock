#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Integer"
	class CSmartPropVariable_Int : public smartprops::CSmartPropVariable
	{
	public:
		int32_t m_DefaultValue; // 0x28		
		// MPropertySortPriority "-1"
		// MPropertyReadonlyExpr
		int32_t m_nParamaterMinValue; // 0x2c		
		// MPropertySortPriority "-1"
		// MPropertyReadonlyExpr
		int32_t m_nParamaterMaxValue; // 0x30		
	};
};
