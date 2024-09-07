#pragma once
#include "smartprops/CSmartPropAttributeDistributionMode.hpp"
#include "smartprops/CSmartPropAttributeRadiusPlacementMode.hpp"
#include "smartprops/CSmartPropElement_Group.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x320
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Place In Radius"
	// MPropertyDescription "An element which places multiple instances of its child elements within a radius."
	class CSmartPropElement_PlaceInSphere : public smartprops::CSmartPropElement_Group
	{
	public:
		// MPropertyDescription "Specifies how the positions are computed based on the radius."
		smartprops::CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // 0xa0		
		// MPropertyDescription "Specifies the method to be used to distribute."
		smartprops::CSmartPropAttributeDistributionMode m_DistributionMode; // 0xe0		
		// MPropertySuppressExpr "m_DistributionMode == RANDOM"
		// MPropertyDescription "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
		CSmartPropAttributeFloat m_flRandomness; // 0x120		
		// MPropertySuppressExpr "m_PlacementMode == SPHERE"
		// MPropertyDescription "Vector up direction of the plane of the circle. This in the local space of the current element."
		CSmartPropAttributeVector m_vPlaneUpDirection; // 0x160		
		// MPropertyDescription "Minimum number of instances of this object and its children to be placed."
		CSmartPropAttributeInt m_nCountMin; // 0x1a0		
		// MPropertyDescription "Maximum number of instances of this object and its children to be placed."
		CSmartPropAttributeInt m_nCountMax; // 0x1e0		
		// MPropertyDescription "Inner radius from the placement position where the model can appear."
		CSmartPropAttributeFloat m_flPositionRadiusInner; // 0x220		
		// MPropertyDescription "Outer radius from the placement position where the model can appear."
		CSmartPropAttributeFloat m_flPositionRadiusOuter; // 0x260		
		// MPropertyDescription "Align the initial orientation of each placed object based on it position on the sphere or circle."
		CSmartPropAttributeBool m_bAlignOrientation; // 0x2a0		
		// MPropertyReadonlyExpr
		// MPropertyDescription "Vector in the local space of the child element to be aligned with sphere or circle"
		CSmartPropAttributeVector m_vAlignDirection; // 0x2e0		
	};
};
