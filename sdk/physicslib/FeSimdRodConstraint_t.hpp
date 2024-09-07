#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x50
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeSimdRodConstraint_t
	{
	public:
		uint16_t nNode[2][4]; // 0x0		
		fltx4 f4MaxDist; // 0x10		
		fltx4 f4MinDist; // 0x20		
		fltx4 f4Weight0; // 0x30		
		fltx4 f4RelaxationFactor; // 0x40		
	};
};
