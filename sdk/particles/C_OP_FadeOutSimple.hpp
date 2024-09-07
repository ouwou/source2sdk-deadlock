#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_FadeOutSimple : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "proportional fade out time"
		float m_flFadeOutTime; // 0x1c0		
		// MPropertyFriendlyName "alpha field"
		// MPropertyAttributeChoiceName "particlefield_alpha"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
	};
};
