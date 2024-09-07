#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapTransformOrientationToYaw : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c0		
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x228		
		// MPropertyFriendlyName "rotation offset"
		float m_flRotOffset; // 0x22c		
		// MPropertyFriendlyName "spin strength"
		float m_flSpinStrength; // 0x230		
	};
};
