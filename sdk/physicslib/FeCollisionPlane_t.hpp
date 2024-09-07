#pragma once
#include "physicslib/RnPlane_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeCollisionPlane_t
	{
	public:
		uint16_t nCtrlParent; // 0x0		
		uint16_t nChildNode; // 0x2		
		physicslib::RnPlane_t m_Plane; // 0x4		
		float flStrength; // 0x14		
	};
};
