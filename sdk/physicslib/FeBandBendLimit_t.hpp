#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeBandBendLimit_t
	{
	public:
		float flDistMin; // 0x0		
		float flDistMax; // 0x4		
		uint16_t nNode[6]; // 0x8		
	};
};
