#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 4
	// Size: 0x2c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CAnimMovement
	{
	public:
		int32_t endframe; // 0x0		
		int32_t motionflags; // 0x4		
		float v0; // 0x8		
		float v1; // 0xc		
		float angle; // 0x10		
		Vector vector; // 0x14		
		Vector position; // 0x20		
	};
};
