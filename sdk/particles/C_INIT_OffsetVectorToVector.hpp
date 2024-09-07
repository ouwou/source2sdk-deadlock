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
	class C_INIT_OffsetVectorToVector : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "output offset minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMin; // 0x1d0		
		// MPropertyFriendlyName "output offset maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMax; // 0x1dc		
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e8		
	};
};
