#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapTransformToVelocity : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c0		
	};
};
