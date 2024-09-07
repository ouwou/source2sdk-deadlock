#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleColorBlendMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x200
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_ColorLitPerParticle : public particles::CParticleFunctionInitializer
	{
	private:
		[[maybe_unused]] uint8_t __pad01c8[0x18]; // 0x1c8
	public:
		// MPropertyFriendlyName "color1"
		Color m_ColorMin; // 0x1e0		
		// MPropertyFriendlyName "color2"
		Color m_ColorMax; // 0x1e4		
		// MPropertyFriendlyName "tint clamp min"
		Color m_TintMin; // 0x1e8		
		// MPropertyFriendlyName "tint clamp max"
		Color m_TintMax; // 0x1ec		
		// MPropertyFriendlyName "light bias"
		float m_flTintPerc; // 0x1f0		
		// MPropertyFriendlyName "tint blend mode"
		particles::ParticleColorBlendMode_t m_nTintBlendMode; // 0x1f4		
		// MPropertyFriendlyName "light amplification amount"
		float m_flLightAmplification; // 0x1f8		
	};
};
