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
	class C_OP_DecayOffscreen : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Offscreen Time Before Decay"
		particleslib::CParticleCollectionFloatInput m_flOffscreenTime; // 0x1c0		
	};
};
