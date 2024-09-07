#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropRadiusPlacementMode_t.hpp"
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
	// MPropertyFriendlyName "Placement Shape"
	// MPropertyDescription "Specifies the shape (circle, or sphere) to use with elements that place children within a radius."
	// MVDataClassGroup
	class CSmartPropVariable_RadiusPlacementMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropRadiusPlacementMode_t m_DefaultValue; // 0x28		
	};
};
