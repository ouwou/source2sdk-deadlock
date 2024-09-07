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
	struct FeStiffHingeBuild_t
	{
	public:
		float flMaxAngle; // 0x0		
		float flStrength; // 0x4		
		float flMotionBias[3]; // 0x8		
		uint16_t nNode[3]; // 0x14		
	};
};
