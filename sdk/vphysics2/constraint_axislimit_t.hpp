#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::vphysics2
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct constraint_axislimit_t
	{
	public:
		float flMinRotation; // 0x0		
		float flMaxRotation; // 0x4		
		float flMotorTargetAngSpeed; // 0x8		
		float flMotorMaxTorque; // 0xc		
	};
};
