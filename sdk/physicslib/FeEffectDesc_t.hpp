#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct FeEffectDesc_t
	{
	public:
		CUtlString sName; // 0x0		
		uint32_t nNameHash; // 0x8		
		int32_t nType; // 0xc		
		KeyValues3 m_Params; // 0x10		
	};
};
