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
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Random Rotation"
	// MPropertyDescription "Apply a random rotation to the current transform."
	// MVDataClassGroup
	class CSmartPropOperation_RandomRotation : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyDescription "Minimum rotation range"
		CSmartPropAttributeAngles m_vRandomRotationMin; // 0x50		
		// MPropertyDescription "Maximum rotation range"
		CSmartPropAttributeAngles m_vRandomRotationMax; // 0x90		
	};
};
