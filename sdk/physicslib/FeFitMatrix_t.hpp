#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x40
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeFitMatrix_t
	{
	public:
		CTransform bone; // 0x0		
		Vector vCenter; // 0x20		
		uint16_t nEnd; // 0x2c		
		uint16_t nNode; // 0x2e		
		uint16_t nBeginDynamic; // 0x30		
	};
};
