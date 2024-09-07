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
	class C_OP_QuantizeFloat : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CPerParticleFloatInput m_InputValue; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x320		
	};
};
