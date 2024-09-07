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
	// MPropertyFriendlyName "Float"
	class CSmartPropVariable_Float : public smartprops::CSmartPropVariable
	{
	public:
		float m_DefaultValue; // 0x28		
		// MPropertySortPriority "-1"
		// MPropertyReadonlyExpr
		float m_flParamaterMinValue; // 0x2c		
		// MPropertySortPriority "-1"
		// MPropertyReadonlyExpr
		float m_flParamaterMaxValue; // 0x30		
	};
};
