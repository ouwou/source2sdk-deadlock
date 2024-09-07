#pragma once
#include "smartprops/CSmartPropElement_Deformer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x260
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Bend Deformer"
	// MPropertyDescription "Creates a bend deformer that is applied to child elements. The deformation bends the local space x-axis around the local space z-axis. The Angles property can be used to rotate the local axis to change the direction of deformation."
	class CSmartPropElement_BendDeformer : public smartprops::CSmartPropElement_Deformer
	{
	public:
		// MPropertyFriendlyName "Deformation Enabled"
		// MPropertyDescription "Should the deformation be applied. If disabled the children will still be placed, but will not be deformed. Esentially making the element behave as a group."
		CSmartPropAttributeBool m_bDeformationEnabled; // 0xa0		
		// MPropertyFriendlyName "Origin"
		// MPropertyDescription "A local offset to apply to the base volume of the deformer that will not apply to its children."
		CSmartPropAttributeVector m_vOrigin; // 0xe0		
		// MPropertyFriendlyName "Angles"
		// MPropertyDescription "A local rotation to apply to apply the base volume of the deformer that will not apply to its children. This can be used to alter the direction of the deformation."
		CSmartPropAttributeAngles m_vAngles; // 0x120		
		// MPropertyFriendlyName "Dimensions"
		// MPropertyDescription "Size of the base volume to be deformed."
		CSmartPropAttributeVector m_vSize; // 0x160		
		// MPropertyFriendlyName "Bend Angle"
		// MPropertyDescription "Bend amount to apply, specified in degrees. Bend occurs along the local x-axis and bends around the local z-axis"
		CSmartPropAttributeFloat m_flBendAngle; // 0x1a0		
		// MPropertyFriendlyName "Bend Point"
		// MPropertyDescription "[ 0, 1 ] Value specifying the location along the local x-axis the bend will occur around"
		CSmartPropAttributeFloat m_flBendPoint; // 0x1e0		
		// MPropertyFriendlyName "Bend Radius"
		// MPropertyDescription "Radius of the bend. If 0 the radius will be computed automatically to preserve the length of the inner edge of the x-axis. If a non-zero value is specified then the inner edge will maintain this radius, but its length will change."
		CSmartPropAttributeFloat m_flBendRadius; // 0x220		
	};
};
