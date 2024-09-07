#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct AABB_t
	{
	public:
		Vector m_vMinBounds; // 0x0		
		Vector m_vMaxBounds; // 0xc		
	};
};
