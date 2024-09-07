#pragma once
#include "mathlib_extended/FourQuaternions.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x70
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeSimdNodeBase_t
	{
	public:
		uint16_t nNode[4]; // 0x0		
		uint16_t nNodeX0[4]; // 0x8		
		uint16_t nNodeX1[4]; // 0x10		
		uint16_t nNodeY0[4]; // 0x18		
		uint16_t nNodeY1[4]; // 0x20		
		uint16_t nDummy[4]; // 0x28		
		mathlib_extended::FourQuaternions qAdjust; // 0x30		
	};
};
