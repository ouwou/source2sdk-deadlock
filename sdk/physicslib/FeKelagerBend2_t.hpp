#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeKelagerBend2_t
	{
	public:
		float flWeight[3]; // 0x0		
		float flHeight0; // 0xc		
		uint16_t nNode[3]; // 0x10		
		uint16_t nReserved; // 0x16		
	};
};
