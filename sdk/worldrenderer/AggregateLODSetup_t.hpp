#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct AggregateLODSetup_t
	{
	public:
		Vector m_vLODOrigin; // 0x0		
		float m_fMaxObjectScale; // 0xc		
		CUtlVector<float> m_fSwitchDistances; // 0x10		
	};
};
