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
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Set Position"
	// MPropertyDescription "Set the position of the current transform."
	// MVDataClassGroup
	class CSmartPropOperation_SetPosition : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyDescription "Local space position translation to apply to the current transform"
		CSmartPropAttributeVector m_vPosition; // 0x50		
		// MPropertyDescription "Specifies the coordinate space of the specified position value."
		smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90		
	};
};
