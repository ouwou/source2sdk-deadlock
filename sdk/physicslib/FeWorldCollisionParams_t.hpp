#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0xc
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeWorldCollisionParams_t
	{
	public:
		float flWorldFriction; // 0x0		
		float flGroundFriction; // 0x4		
		uint16_t nListBegin; // 0x8		
		uint16_t nListEnd; // 0xa		
	};
};
