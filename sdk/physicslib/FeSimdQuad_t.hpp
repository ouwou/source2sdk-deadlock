#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x130
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeSimdQuad_t
	{
	public:
		uint16_t nNode[4][4]; // 0x0		
		fltx4 f4Slack; // 0x20		
		FourVectors vShape[4]; // 0x30		
		fltx4 f4Weights[4]; // 0xf0		
	};
};
