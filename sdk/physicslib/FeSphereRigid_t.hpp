#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeSphereRigid_t
	{
	public:
		fltx4 vSphere; // 0x0		
		uint16_t nNode; // 0x10		
		uint16_t nCollisionMask; // 0x12		
		uint16_t nVertexMapIndex; // 0x14		
		uint16_t nFlags; // 0x16		
	};
};
