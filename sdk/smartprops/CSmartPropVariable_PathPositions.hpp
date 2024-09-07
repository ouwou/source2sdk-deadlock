#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropPathPositions_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Path Positions"
	// MPropertyDescription "Specifies the set of positions that are valid for path placement."
	// MVDataClassGroup
	class CSmartPropVariable_PathPositions : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropPathPositions_t m_DefaultValue; // 0x28		
	};
};
