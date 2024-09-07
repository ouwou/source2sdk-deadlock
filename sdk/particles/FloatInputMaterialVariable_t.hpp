#pragma once
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x168
	// 
	// MGetKV3ClassDefaults
	struct FloatInputMaterialVariable_t
	{
	public:
		// MPropertyFriendlyName "material variable"
		CUtlString m_strVariable; // 0x0		
		// MPropertyFriendlyName "input"
		particleslib::CParticleCollectionFloatInput m_flInput; // 0x8		
	};
};
