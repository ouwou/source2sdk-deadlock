#pragma once
#include "smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "smartprops/CSmartPropAttributePickMode.hpp"
#include "smartprops/CSmartPropAttributeScaleMode.hpp"
#include "smartprops/CSmartPropElement_Group.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x2e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Fit on Line"
	// MPropertyDescription "An element which fits one or more instances of a set of choices on to a line."
	class CSmartPropElement_FitOnLine : public smartprops::CSmartPropElement_Group
	{
	public:
		// MPropertyStartGroup "+End Points"
		// MPropertyDescription "Specifies the start point of the line in the specified coordinate space."
		CSmartPropAttributeVector m_vStart; // 0xa0		
		// MPropertyDescription "Specifies the end point of the line in the specified coordinate space."
		CSmartPropAttributeVector m_vEnd; // 0xe0		
		// MPropertyFriendlyName "End point space"
		// MPropertyDescription "Specifies the coordinate space in which the end point values are specified."
		smartprops::CSmartPropAttributeCoordinateSpace m_PointSpace; // 0x120		
		// MPropertyStartGroup "+Orientation"
		// MPropertyDescription "Should the child elements be oriented based on the line. If enabled the child elements placed on the line will be oriented such that their +x axis points along the line towards the end point."
		CSmartPropAttributeBool m_bOrientAlongLine; // 0x160		
		// MPropertyDescription "Up vector which is used to determine the rotation of each element around the line."
		CSmartPropAttributeVector m_vUpDirection; // 0x1a0		
		// MPropertyDescription "Space in which the up direction is defined."
		smartprops::CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x1e0		
		// MPropertyDescription "When the up direction is not orthogonal to the line direction normally the up vector will be adjusted to make it orthogonal to the line direction. If prioritize up is true, then the up direction will be maintained and the forward direction will be adjusted."
		CSmartPropAttributeBool m_bPrioritizeUp; // 0x220		
		// MPropertyStartGroup
		// MPropertyFriendlyName "Scale Mode"
		// MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
		smartprops::CSmartPropAttributeScaleMode m_nScaleMode; // 0x260		
		// MPropertyFriendlyName "Child Selection Mode"
		// MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
		smartprops::CSmartPropAttributePickMode m_nPickMode; // 0x2a0		
	};
};
