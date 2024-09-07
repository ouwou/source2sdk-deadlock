#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropSpace_t.hpp"
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
	// MPropertyFriendlyName "Coordinate Space"
	// MPropertyDescription "Specifies a coordinate space in which a point or vector value is defined."
	// MVDataClassGroup
	class CSmartPropVariable_CoordinateSpace : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropSpace_t m_DefaultValue; // 0x28		
	};
};
