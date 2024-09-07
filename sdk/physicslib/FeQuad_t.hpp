#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x4c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeQuad_t
	{
	public:
		uint16_t nNode[4]; // 0x0		
		float flSlack; // 0x8		
		Vector4D vShape[4]; // 0xc		
	};
};
