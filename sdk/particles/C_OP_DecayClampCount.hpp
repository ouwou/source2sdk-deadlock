#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x320
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DecayClampCount : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Maximum Count"
		particleslib::CParticleCollectionFloatInput m_nCount; // 0x1c0		
	};
};
