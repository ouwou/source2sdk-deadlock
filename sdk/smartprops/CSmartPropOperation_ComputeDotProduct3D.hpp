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
	// Size: 0xd8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Dot Product"
	// MPropertyDescription "Compute a dot or cross product between two 3D vectors"
	// MVDataClassGroup
	class CSmartPropOperation_ComputeDotProduct3D : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyFriendlyName "Output Variable"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableName; // 0x50		
		// MPropertyFriendlyName "Vector A"
		CSmartPropAttributeVector m_InputVectorA; // 0x58		
		// MPropertyFriendlyName "Vector B"
		CSmartPropAttributeVector m_InputVectorB; // 0x98		
	};
};
