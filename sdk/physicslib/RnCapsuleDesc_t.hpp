#pragma once
#include "physicslib/RnCapsule_t.hpp"
#include "physicslib/RnShapeDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct RnCapsuleDesc_t : public physicslib::RnShapeDesc_t
	{
	public:
		physicslib::RnCapsule_t m_Capsule; // 0x18		
	};
};
