#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particles/ParticleDirectionNoiseType_t.hpp"
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
	// Size: 0x1e78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CurlNoiseForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "noise type"
		particles::ParticleDirectionNoiseType_t m_nNoiseType; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "noise frequency"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecNoiseFreq; // 0x1d8		
		// MPropertyFriendlyName "noise amplitude"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecNoiseScale; // 0x850		
		// MPropertyFriendlyName "offset"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecOffset; // 0xec8		
		// MPropertyFriendlyName "offset rate"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecOffsetRate; // 0x1540		
		// MPropertyFriendlyName "worley seed"
		particleslib::CPerParticleFloatInput m_flWorleySeed; // 0x1bb8		
		// MPropertyFriendlyName "worley jitter"
		particleslib::CPerParticleFloatInput m_flWorleyJitter; // 0x1d18		
	};
};
