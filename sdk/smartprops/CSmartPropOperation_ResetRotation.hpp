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
	// Size: 0x150
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Reset Rotation"
	// MPropertyDescription "Reset the current rotation such the element only inherits the object level rotation, but does not inherit the rotation applied to its parent."
	// MVDataClassGroup
	class CSmartPropOperation_ResetRotation : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyDescription "If enabled, the rotation will be reset to a world space instead of object space, meaning any rotation applied to the object in Hammer will be ignored."
		CSmartPropAttributeBool m_bIgnoreObjectRotation; // 0x50		
		// MPropertyDescription "Should the pitch (rotation around left vector) value be reset."
		CSmartPropAttributeBool m_bResetPitch; // 0x90		
		// MPropertyDescription "Should the yaw (roation around the up vector) value be reset."
		CSmartPropAttributeBool m_bResetYaw; // 0xd0		
		// MPropertyDescription "Should the roll (rotation around forward vector) value be reset."
		CSmartPropAttributeBool m_bResetRoll; // 0x110		
	};
};
