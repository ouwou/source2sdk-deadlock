#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/MissingParentInheritBehavior_t.hpp"
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
	// MParticleMinVersion "9"
	// MGetKV3ClassDefaults
	class C_OP_InheritFromParentParticlesV2 : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "scale"
		float m_flScale; // 0x1c0		
		// MPropertyFriendlyName "inherited field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "particle increment amount"
		int32_t m_nIncrement; // 0x1c8		
		// MPropertyFriendlyName "random parent particle distribution"
		bool m_bRandomDistribution; // 0x1cc		
	private:
		[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
	public:
		// MPropertyFriendlyName "behavior if parent particle dies"
		particles::MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1d0		
	};
};
