#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x24
	// Has Trivial Destructor
	struct SoundeventPathCornerPairNetworked_t
	{
	public:
		Vector vP1; // 0x0		
		Vector vP2; // 0xc		
		float flPathLengthSqr; // 0x18		
		float flP1Pct; // 0x1c		
		float flP2Pct; // 0x20		
	};
};
