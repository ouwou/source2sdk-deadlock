#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	// Alignment: 8
	// Size: 0x490
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitFloat : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "value"
		particleslib::CPerParticleFloatInput m_InputValue; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x328		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x32c		
		// MPropertyFriendlyName "per-particle strength"
		particleslib::CPerParticleFloatInput m_InputStrength; // 0x330		
	};
};
