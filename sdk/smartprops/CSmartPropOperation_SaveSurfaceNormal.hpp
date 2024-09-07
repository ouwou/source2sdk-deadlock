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
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Save Current Surface Normal"
	// MPropertyDescription "Save the current surface normal to a specified variable in the requested coordinate space"
	// MVDataClassGroup
	class CSmartPropOperation_SaveSurfaceNormal : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyDescription "Specifies the coordinate space of the saved position value."
		smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x50		
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
		CUtlString m_VariableName; // 0x90		
	};
};
