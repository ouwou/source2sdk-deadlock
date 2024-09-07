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
	// Size: 0x1d0
	// Has VTable
	// 
	// MParticleMaxVersion "8"
	// MParticleReplacementOp "C_OP_InheritFromParentParticlesV2"
	// MGetKV3ClassDefaults
	class C_OP_InheritFromParentParticles : public particles::CParticleFunctionOperator
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
	};
};
