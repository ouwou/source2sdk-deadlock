#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MVDataRoot
	// MGetKV3ClassDefaults
	class CNavHullPresetVData
	{
	public:
		// MPropertyFriendlyName "Nav Hulls"
		// MPropertyDescription "List of nav hulls belonging to this preset."
		// MPropertyAttributeEditor "VDataChoice( scripts/nav_hulls.vdata )"
		CUtlVector<CUtlString> m_vecNavHulls; // 0x0		
	};
};
