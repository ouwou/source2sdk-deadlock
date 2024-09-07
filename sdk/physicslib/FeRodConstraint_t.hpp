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
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeRodConstraint_t
	{
	public:
		uint16_t nNode[2]; // 0x0		
		float flMaxDist; // 0x4		
		float flMinDist; // 0x8		
		float flWeight0; // 0xc		
		float flRelaxationFactor; // 0x10		
	};
};
