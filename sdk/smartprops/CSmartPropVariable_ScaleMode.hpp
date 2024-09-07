#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/ScaleMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Fit on Line Scale Mode"
	// MPropertyDescription "Specifies how a fit on line element will scale generate scale values for the objects it places."
	// MVDataClassGroup
	class CSmartPropVariable_ScaleMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::ScaleMode_t m_DefaultValue; // 0x28		
	};
};
