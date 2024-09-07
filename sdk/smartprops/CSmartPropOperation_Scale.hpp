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
	// MPropertyFriendlyName "Transform: Scale"
	// MPropertyDescription "Apply a scale to the current transform."
	// MVDataClassGroup
	class CSmartPropOperation_Scale : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyDescription "Scale to apply to the current transform"
		CSmartPropAttributeFloat m_flScale; // 0x50		
	};
};
