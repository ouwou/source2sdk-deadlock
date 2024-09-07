#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/PickMode_t.hpp"
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
	// MPropertyFriendlyName "Fit on Line Pick Mode"
	// MPropertyDescription "Specifies how a fit on line element will pick which child elements it will place."
	// MVDataClassGroup
	class CSmartPropVariable_PickMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::PickMode_t m_DefaultValue; // 0x28		
	};
};
