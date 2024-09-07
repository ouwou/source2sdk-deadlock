#pragma once
#include "smartprops/CSmartPropFilter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Filter: Surface Properties"
	// MPropertyDescription "Allows the parent element to be conditionally evaluated based on surface properties."
	// MVDataClassGroup
	class CSmartPropFilter_SurfaceProperties : public smartprops::CSmartPropFilter
	{
	public:
		// MPropertyDescription "List of surface properties on which this element is valid. If empty element is not restricted to any specific surfaces."
		CUtlVector<CUtlString> m_AllowedSurfaceProperties; // 0x50		
		// MPropertyDescription "List of surface properties on which this element is not valid. If empty element is not restricted to any specific surfaces."
		CUtlVector<CUtlString> m_DisallowedSurfaceProperties; // 0x68		
	};
};
