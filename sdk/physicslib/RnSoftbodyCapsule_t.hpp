#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct RnSoftbodyCapsule_t
	{
	public:
		Vector m_vCenter[2]; // 0x0		
		float m_flRadius; // 0x18		
		uint16_t m_nParticle[2]; // 0x1c		
	};
};
