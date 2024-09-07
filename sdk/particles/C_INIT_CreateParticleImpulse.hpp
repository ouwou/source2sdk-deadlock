#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleFalloffFunction_t.hpp"
#include "particles/ParticleImpulseType_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x5f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateParticleImpulse : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "radius"
		particleslib::CPerParticleFloatInput m_InputRadius; // 0x1c8		
		// MPropertyFriendlyName "magnitude"
		particleslib::CPerParticleFloatInput m_InputMagnitude; // 0x328		
		// MPropertyFriendlyName "force falloff function"
		particles::ParticleFalloffFunction_t m_nFalloffFunction; // 0x488		
	private:
		[[maybe_unused]] uint8_t __pad048c[0x4]; // 0x48c
	public:
		// MPropertyFriendlyName "exponential falloff exponent"
		particleslib::CPerParticleFloatInput m_InputFalloffExp; // 0x490		
		// MPropertyFriendlyName "impulse type"
		particles::ParticleImpulseType_t m_nImpulseType; // 0x5f0		
	};
};
