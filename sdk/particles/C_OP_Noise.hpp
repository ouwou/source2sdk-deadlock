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
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_Noise : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1c4		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1c8		
		// MPropertyFriendlyName "noise coordinate scale"
		float m_fl4NoiseScale; // 0x1cc		
		// MPropertyFriendlyName "additive"
		bool m_bAdditive; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "Noise animation time scale"
		float m_flNoiseAnimationTimeScale; // 0x1d4		
	};
};
