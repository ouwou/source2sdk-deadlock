#pragma once
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct MaterialVariable_t
	{
	public:
		// MPropertyFriendlyName "material variable"
		CUtlString m_strVariable; // 0x0		
		// MPropertyFriendlyName "particle field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nVariableField; // 0x8		
		// MPropertyFriendlyName "scale"
		float m_flScale; // 0xc		
	};
};
