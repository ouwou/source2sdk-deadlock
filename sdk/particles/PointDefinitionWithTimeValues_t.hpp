#pragma once
#include "particles/PointDefinition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PointDefinitionWithTimeValues_t : public particles::PointDefinition_t
	{
	public:
		// MPropertyFriendlyName "Duration value for path point"
		float m_flTimeDuration; // 0x14		
	};
};
