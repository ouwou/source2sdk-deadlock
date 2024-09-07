#pragma once
#include "physicslib/RnHull_t.hpp"
#include "physicslib/RnShapeDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x110
	// 
	// MGetKV3ClassDefaults
	struct RnHullDesc_t : public physicslib::RnShapeDesc_t
	{
	public:
		physicslib::RnHull_t m_Hull; // 0x18		
	};
};
