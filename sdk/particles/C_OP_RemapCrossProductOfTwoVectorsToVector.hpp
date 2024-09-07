#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xeb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapCrossProductOfTwoVectorsToVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "input vector 1"
		particleslib::CPerParticleVecInput m_InputVec1; // 0x1c0		
		// MPropertyFriendlyName "input vector 2"
		particleslib::CPerParticleVecInput m_InputVec2; // 0x838		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0xeb0		
		// MPropertyFriendlyName "normalize output"
		bool m_bNormalize; // 0xeb4		
	};
};
