#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 2
	// Size: 0x10
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeEdgeDesc_t
	{
	public:
		uint16_t nEdge[2]; // 0x0		
		uint16_t nSide[2][2]; // 0x4		
		uint16_t nVirtElem[2]; // 0xc		
	};
};
