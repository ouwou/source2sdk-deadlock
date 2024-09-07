#pragma once
#include "smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "smartprops/CSmartPropOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Vector Between Points"
	// MPropertyDescription "Compute the vector between two 3D points"
	// MVDataClassGroup
	class CSmartPropOperation_ComputeVectorBetweenPoints3D : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyFriendlyName "Output Variable"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
		CUtlString m_OutputVariableName; // 0x50		
		// MPropertyDescription "Specifies the coordinate space that vector should be returned in."
		smartprops::CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58		
		// MPropertyFriendlyName "Normalized (Direction Vector)"
		// MPropertyDescription "Should the return value be normalized to unit length (direction vector)."
		CSmartPropAttributeBool m_bNormalized; // 0x98		
		// MPropertyGroupName "+Position A"
		// MPropertyFriendlyName "Position A"
		CSmartPropAttributeVector m_InputPositionA; // 0xd8		
		// MPropertyGroupName "+Position A"
		// MPropertyDescription "Specifies the coordinate space of position A."
		smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0x118		
		// MPropertyGroupName "+Position B"
		// MPropertyFriendlyName "Position B"
		CSmartPropAttributeVector m_InputPositionB; // 0x158		
		// MPropertyGroupName "+Position B"
		// MPropertyDescription "Specifies the coordinate space of position B."
		smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x198		
	};
};
