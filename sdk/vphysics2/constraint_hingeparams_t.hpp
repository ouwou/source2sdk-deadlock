#pragma once
#include "vphysics2/constraint_axislimit_t.hpp"
#include "vphysics2/constraint_breakableparams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::vphysics2
{
	// Alignment: 8
	// Size: 0x40
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct constraint_hingeparams_t
	{
	public:
		Vector worldPosition; // 0x0		
		Vector worldAxisDirection; // 0xc		
		vphysics2::constraint_axislimit_t hingeAxis; // 0x18		
		vphysics2::constraint_breakableparams_t constraint; // 0x28		
	};
};
