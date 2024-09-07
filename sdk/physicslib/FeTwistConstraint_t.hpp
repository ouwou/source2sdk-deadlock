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
	struct FeTwistConstraint_t
	{
	public:
		uint16_t nNodeOrient; // 0x0		
		uint16_t nNodeEnd; // 0x2		
		float flTwistRelax; // 0x4		
		float flSwingRelax; // 0x8		
	};
};
