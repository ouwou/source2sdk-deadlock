#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xd38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RingWave : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "input transform"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
		// MPropertyFriendlyName "even distribution count"
		particleslib::CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x230		
		// MPropertyFriendlyName "initial radius"
		particleslib::CPerParticleFloatInput m_flInitialRadius; // 0x390		
		// MPropertyFriendlyName "thickness"
		particleslib::CPerParticleFloatInput m_flThickness; // 0x4f0		
		// MPropertyFriendlyName "min initial speed"
		particleslib::CPerParticleFloatInput m_flInitialSpeedMin; // 0x650		
		// MPropertyFriendlyName "max initial speed"
		particleslib::CPerParticleFloatInput m_flInitialSpeedMax; // 0x7b0		
		// MPropertyFriendlyName "roll"
		particleslib::CPerParticleFloatInput m_flRoll; // 0x910		
		// MPropertyFriendlyName "pitch"
		particleslib::CPerParticleFloatInput m_flPitch; // 0xa70		
		// MPropertyFriendlyName "yaw"
		particleslib::CPerParticleFloatInput m_flYaw; // 0xbd0		
		// MPropertyFriendlyName "even distribution"
		bool m_bEvenDistribution; // 0xd30		
		// MPropertyFriendlyName "XY velocity only"
		bool m_bXYVelocityOnly; // 0xd31		
	};
};
