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
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomVector : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "min"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecMin; // 0x1c8		
		// MPropertyFriendlyName "max"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecMax; // 0x1d4		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0		
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e4		
	};
};
