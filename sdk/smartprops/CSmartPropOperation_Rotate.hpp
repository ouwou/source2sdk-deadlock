#pragma once
#include "smartprops/CSmartPropTransformOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Rotate"
	// MPropertyDescription "Apply a rotation to the current transform."
	// MVDataClassGroup
	class CSmartPropOperation_Rotate : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyDescription "Local space rotation (in degrees) to apply to the current transform"
		CSmartPropAttributeAngles m_vRotation; // 0x50		
	};
};
