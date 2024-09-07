#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropGridOriginBasis_t.hpp"
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
	// MPropertyFriendlyName "Grid Origin"
	// MPropertyDescription "Specifies where the origin of a child element is placed realative to each grid cell."
	// MVDataClassGroup
	class CSmartPropVariable_GridOriginMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropGridOriginBasis_t m_DefaultValue; // 0x28		
	};
};
