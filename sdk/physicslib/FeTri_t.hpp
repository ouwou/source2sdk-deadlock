#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x1c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeTri_t
	{
	public:
		uint16_t nNode[3]; // 0x0		
		float w1; // 0x8		
		float w2; // 0xc		
		float v1x; // 0x10		
		Vector2D v2; // 0x14		
	};
};
