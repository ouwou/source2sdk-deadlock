#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x4b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetFloat : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CPerParticleFloatInput m_InputValue; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x320		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x324		
		// MPropertyFriendlyName "interpolation"
		particleslib::CPerParticleFloatInput m_Lerp; // 0x328		
	};
};
