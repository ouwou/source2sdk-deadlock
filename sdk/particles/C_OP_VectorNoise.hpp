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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_VectorNoise : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "output minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMin; // 0x1c4		
		// MPropertyFriendlyName "output maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMax; // 0x1d0		
		// MPropertyFriendlyName "noise coordinate scale"
		float m_fl4NoiseScale; // 0x1dc		
		// MPropertyFriendlyName "additive"
		bool m_bAdditive; // 0x1e0		
		// MPropertyFriendlyName "offset instead of accelerate position"
		bool m_bOffset; // 0x1e1		
	private:
		[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
	public:
		// MPropertyFriendlyName "Noise animation time scale"
		float m_flNoiseAnimationTimeScale; // 0x1e4		
	};
};
