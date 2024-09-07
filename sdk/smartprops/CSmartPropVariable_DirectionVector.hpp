#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropDirection_t.hpp"
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
	// MPropertyFriendlyName "Direction Vector"
	// MPropertyDescription "Specifies a basis direction vector ( Forward, Left, or UP)."
	// MVDataClassGroup
	class CSmartPropVariable_DirectionVector : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropDirection_t m_DefaultValue; // 0x28		
	};
};
