#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct LaneDesc_t
	{
	public:
		CUtlString m_strLaneName; // 0x0		
		CUtlString m_strCSSClass; // 0x8		
		Color m_Color; // 0x10		
		Color m_MinimapColorOverride; // 0x14		
	};
};
