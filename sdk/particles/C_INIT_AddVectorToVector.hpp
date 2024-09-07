#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CRandomNumberGeneratorParameters.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x200
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_AddVectorToVector : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "component scale factor"
		Vector m_vecScale; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4		
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1d8		
		// MPropertyFriendlyName "random offset min"
		Vector m_vOffsetMin; // 0x1dc		
		// MPropertyFriendlyName "random offset max"
		Vector m_vOffsetMax; // 0x1e8		
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f4		
	};
};
