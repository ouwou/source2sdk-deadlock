#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeTaperedCapsuleStretch_t
	{
	public:
		uint16_t nNode[2]; // 0x0		
		uint16_t nCollisionMask; // 0x4		
		// MPropertySuppressField
		uint16_t nDummy; // 0x6		
		float flRadius[2]; // 0x8		
	};
};
