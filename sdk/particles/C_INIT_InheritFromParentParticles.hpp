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
	class C_INIT_InheritFromParentParticles : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "scale"
		float m_flScale; // 0x1c8		
		// MPropertyFriendlyName "inherited field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "particle increment amount"
		int32_t m_nIncrement; // 0x1d0		
		// MPropertyFriendlyName "random parent particle distribution"
		bool m_bRandomDistribution; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
	public:
		// MPropertyFriendlyName "random seed"
		int32_t m_nRandomSeed; // 0x1d8		
	};
};
