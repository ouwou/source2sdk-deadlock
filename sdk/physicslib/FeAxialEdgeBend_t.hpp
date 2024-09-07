#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x28
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeAxialEdgeBend_t
	{
	public:
		float te; // 0x0		
		float tv; // 0x4		
		float flDist; // 0x8		
		float flWeight[4]; // 0xc		
		uint16_t nNode[6]; // 0x1c		
	};
};
