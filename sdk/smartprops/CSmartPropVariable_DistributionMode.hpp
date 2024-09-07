#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropDistributionMode_t.hpp"
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
	// MPropertyFriendlyName "Distribution Mode"
	// MPropertyDescription "Specifies a distribution mode used to determine how certain elements distribute instances of their children within a space."
	// MVDataClassGroup
	class CSmartPropVariable_DistributionMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropDistributionMode_t m_DefaultValue; // 0x28		
	};
};
