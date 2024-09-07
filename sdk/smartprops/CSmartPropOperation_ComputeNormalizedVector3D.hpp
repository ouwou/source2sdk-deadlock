#pragma once
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
	// MPropertyFriendlyName "Normalize Vector"
	// MPropertyDescription "Normalize the value of a 3d vector."
	// MVDataClassGroup
	class CSmartPropOperation_ComputeNormalizedVector3D : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyFriendlyName "Output Variable"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
		CUtlString m_OutputVariableName; // 0x50		
		CSmartPropAttributeVector m_InputVector; // 0x58		
	};
};
