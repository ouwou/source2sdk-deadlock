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
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Filter: Surface Angles"
	// MPropertyDescription "Allows the parent element to be conditionally evaluated base on the current surface angle. The surface angle is set based on the initial placement of the smart prop object, but can also be updated by the Trace to Surface modifier."
	// MVDataClassGroup
	class CSmartPropFilter_SurfaceAngle : public smartprops::CSmartPropFilter
	{
	public:
		// MPropertyDescription "Minimum slope on which the target will be placed. Slope is a [ 0, 180 ] value of the surface normal rotation from up such that 0 is a horizontal surface (floor), 90 is a vertical surface (wall), 180 is horizontal upside down surface (ceiling)."
		CSmartPropAttributeFloat m_flSurfaceSlopeMin; // 0x50		
		// MPropertyDescription "Maximum slope on which the target will be placed."
		CSmartPropAttributeFloat m_flSurfaceSlopeMax; // 0x90		
	};
};
