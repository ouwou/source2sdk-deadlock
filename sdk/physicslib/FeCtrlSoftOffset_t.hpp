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
	struct FeCtrlSoftOffset_t
	{
	public:
		uint16_t nCtrlParent; // 0x0		
		uint16_t nCtrlChild; // 0x2		
		Vector vOffset; // 0x4		
		float flAlpha; // 0x10		
	};
};
