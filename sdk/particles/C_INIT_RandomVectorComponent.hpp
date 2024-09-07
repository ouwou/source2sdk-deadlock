#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomVectorComponent : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "min"
		float m_flMin; // 0x1c8		
		// MPropertyFriendlyName "max"
		float m_flMax; // 0x1cc		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0		
		// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
		// MPropertyAttributeChoiceName "vector_component"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		int32_t m_nComponent; // 0x1d4		
	};
};
