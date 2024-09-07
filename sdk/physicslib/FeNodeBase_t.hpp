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
	struct FeNodeBase_t
	{
	public:
		uint16_t nNode; // 0x0		
		uint16_t nDummy[3]; // 0x2		
		uint16_t nNodeX0; // 0x8		
		uint16_t nNodeX1; // 0xa		
		uint16_t nNodeY0; // 0xc		
		uint16_t nNodeY1; // 0xe		
		QuaternionStorage qAdjust; // 0x10		
	};
};
