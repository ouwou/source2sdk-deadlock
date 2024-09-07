#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	class C_INIT_CreateFromParentParticles : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "inherited velocity scale"
		float m_flVelocityScale; // 0x1c8		
		// MPropertyFriendlyName "particle increment amount"
		float m_flIncrement; // 0x1cc		
		// MPropertyFriendlyName "random parent particle distribution"
		bool m_bRandomDistribution; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "random seed"
		int32_t m_nRandomSeed; // 0x1d4		
		// MPropertyFriendlyName "sub frame interpolation"
		bool m_bSubFrame; // 0x1d8		
	};
};
