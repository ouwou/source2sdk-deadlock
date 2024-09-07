#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x350
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_LerpToOtherAttribute : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c0		
		// MPropertyFriendlyName "input attribute from"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldInputFrom; // 0x320		
		// MPropertyFriendlyName "input attribute to"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x324		
		// MPropertyFriendlyName "output attribute"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x328		
	};
};
