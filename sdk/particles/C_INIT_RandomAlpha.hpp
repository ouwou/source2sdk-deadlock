#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomAlpha : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "alpha field"
		// MPropertyAttributeChoiceName "particlefield_alpha"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "alpha min"
		// MPropertyAttributeRange "0 255"
		int32_t m_nAlphaMin; // 0x1cc		
		// MPropertyFriendlyName "alpha max"
		// MPropertyAttributeRange "0 255"
		int32_t m_nAlphaMax; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x8]; // 0x1d4
	public:
		// MPropertyFriendlyName "alpha random exponent"
		float m_flAlphaRandExponent; // 0x1dc		
	};
};
