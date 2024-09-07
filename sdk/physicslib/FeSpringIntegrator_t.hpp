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
	struct FeSpringIntegrator_t
	{
	public:
		uint16_t nNode[2]; // 0x0		
		float flSpringRestLength; // 0x4		
		float flSpringConstant; // 0x8		
		float flSpringDamping; // 0xc		
		float flNodeWeight0; // 0x10		
	};
};
