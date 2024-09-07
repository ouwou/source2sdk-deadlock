#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14
	// Has Trivial Destructor
	struct RagdollCreationParams_t
	{
	public:
		Vector m_vForce; // 0x0		
		int32_t m_nForceBone; // 0xc		
		bool m_bForceCurrentWorldTransform; // 0x10		
	};
};
