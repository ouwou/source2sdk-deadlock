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
	class C_OP_RemapDensityGradientToVectorAttribute : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Radius scale for particle influence"
		float m_flRadiusScale; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
	};
};
