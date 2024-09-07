#pragma once
#include "physicslib/RnShapeDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct RnSphereDesc_t : public physicslib::RnShapeDesc_t
	{
	public:
		SphereBase_t<float> m_Sphere; // 0x18		
	};
};
