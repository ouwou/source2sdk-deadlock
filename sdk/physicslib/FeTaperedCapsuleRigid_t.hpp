#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeTaperedCapsuleRigid_t
	{
	public:
		fltx4 vSphere[2]; // 0x0		
		uint16_t nNode; // 0x20		
		uint16_t nCollisionMask; // 0x22		
		uint16_t nVertexMapIndex; // 0x24		
		uint16_t nFlags; // 0x26		
	};
};
