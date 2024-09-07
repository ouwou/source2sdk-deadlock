#pragma once
#include "physicslib/FourVectors2D.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x80
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeSimdTri_t
	{
	public:
		uint32_t nNode[3][4]; // 0x0		
		fltx4 w1; // 0x30		
		fltx4 w2; // 0x40		
		fltx4 v1x; // 0x50		
		physicslib::FourVectors2D v2; // 0x60		
	};
};
