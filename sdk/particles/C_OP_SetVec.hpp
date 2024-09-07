#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x9a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetVec : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CPerParticleVecInput m_InputValue; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x838		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x83c		
		// MPropertyFriendlyName "interpolation"
		particleslib::CPerParticleFloatInput m_Lerp; // 0x840		
		// MPropertyFriendlyName "normalize result"
		bool m_bNormalizedOutput; // 0x9a0		
	};
};
