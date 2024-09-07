#pragma once
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x680
	// 
	// MGetKV3ClassDefaults
	struct VecInputMaterialVariable_t
	{
	public:
		// MPropertyFriendlyName "material variable"
		CUtlString m_strVariable; // 0x0		
		// MPropertyFriendlyName "input"
		particleslib::CParticleCollectionVecInput m_vecInput; // 0x8		
	};
};
