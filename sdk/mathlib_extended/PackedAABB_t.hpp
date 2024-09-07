#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct PackedAABB_t
	{
	public:
		uint32_t m_nPackedMin; // 0x0		
		uint32_t m_nPackedMax; // 0x4		
	};
};
