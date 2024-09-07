#pragma once
#include "smartprops/ApplyColorMode_t.hpp"
#include "smartprops/CSmartPropVariable.hpp"
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
	// MPropertyFriendlyName "Tint Mode"
	// MPropertyDescription "Specifies how a color tint value is to be applied with respect to the existing color tint"
	// MVDataClassGroup
	class CSmartPropVariable_ApplyColorMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::ApplyColorMode_t m_DefaultValue; // 0x28		
	};
};
