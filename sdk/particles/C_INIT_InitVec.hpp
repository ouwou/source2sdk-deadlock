#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitVec : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CPerParticleVecInput m_InputValue; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x840		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x844		
		// MPropertyFriendlyName "normalize result"
		bool m_bNormalizedOutput; // 0x848		
		// MPropertyFriendlyName "set previous position"
		// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
		bool m_bWritePreviousPosition; // 0x849		
	};
};
