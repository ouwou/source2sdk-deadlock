#pragma once
#include "mathlib_extended/AABB_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct ClutterTile_t
	{
	public:
		uint32_t m_nFirstInstance; // 0x0		
		uint32_t m_nLastInstance; // 0x4		
		mathlib_extended::AABB_t m_BoundsWs; // 0x8		
	};
};
