#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x848
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitVecCollection : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CParticleCollectionVecInput m_InputValue; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x840		
	};
};
