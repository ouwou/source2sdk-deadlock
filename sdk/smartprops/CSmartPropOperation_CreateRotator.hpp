#pragma once
#include "smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "smartprops/CSmartPropTransformOperation.hpp"
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
	// MPropertyFriendlyName "Create Rotator"
	// MPropertyDescription "Create a rotator that will be displayed at the current location, allowing the user to manipulate a rotation around an axis. The rotation value can be applied to the current transform as well as saved to a variable."
	// MVDataClassGroup
	class CSmartPropOperation_CreateRotator : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyFriendlyName "Name"
		// MPropertyDescription "Name used to identify the rotator. Must be unique within the parent element."
		CUtlString m_Name; // 0x50		
		// MPropertyDescription "Axis around which the rotation will occur"
		CSmartPropAttributeVector m_vRotationAxis; // 0x58		
		// MPropertyDescription "Coordinate space the axis of rotation is specified in."
		smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x98		
		// MPropertyDescription "Radius at which the rotator handle should be displayed."
		CSmartPropAttributeFloat m_flDisplayRadius; // 0xd8		
		// MPropertyDescription "Should the rotation be applied to the current transform."
		CSmartPropAttributeBool m_bApplyToCurrentTransform; // 0x118		
		// MPropertyDescription "Specifies the number of degrees the rotation should snap to. If set to 0, then the rotation snapping will be controlled by the rotation snapping in Hammer."
		CSmartPropAttributeFloat m_flSnappingIncrement; // 0x158		
		// MPropertyFriendlyName "Enforce Limits"
		// MPropertyDescription "If enabled, the minimum and maximum rotation angles will be used to limit the range of the rotation."
		CSmartPropAttributeBool m_bEnforceLimits; // 0x198		
		// MPropertyReadonlyExpr
		// MPropertyFriendlyName "Minimum Angle"
		// MPropertyDescription "Specifies the minimum angle limit in degrees"
		CSmartPropAttributeFloat m_flMinAngle; // 0x1d8		
		// MPropertyReadonlyExpr
		// MPropertyFriendlyName "Minimum Angle"
		// MPropertyDescription "Specifies the minimum angle limit in degrees"
		CSmartPropAttributeFloat m_flMaxAngle; // 0x218		
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		// MPropertyDescription "Specifies a float variable to which the rotation value should be output. The variable only receives the rotation around the axis, the axis of rotation does not affect this output."
		CUtlString m_OutputVariable; // 0x258		
	};
};
