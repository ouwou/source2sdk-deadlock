#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x24
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct LastIncomingHit_t
	{
	public:
		Vector vecDir; // 0x0		
		Vector vecBoneLocalPos; // 0xc		
		int32_t nHitboxBoneIndex; // 0x18		
		float flHitStrength; // 0x1c		
		int32_t nDamageType; // 0x20		
	};
};
