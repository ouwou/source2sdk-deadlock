#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropGridPlacementMode_t.hpp"
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
	// MPropertyFriendlyName "Grid Placement"
	// MPropertyDescription "Specifies how to place elements within a grid."
	// MVDataClassGroup
	class CSmartPropVariable_GridPlacementMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropGridPlacementMode_t m_DefaultValue; // 0x28		
	};
};
