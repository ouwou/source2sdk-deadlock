#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x8b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_VelocityFromCP : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "velocity"
		particleslib::CParticleCollectionVecInput m_velocityInput; // 0x1c8		
		// MPropertyFriendlyName "local space"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_transformInput; // 0x840		
		// MPropertyFriendlyName "velocity scale"
		float m_flVelocityScale; // 0x8a8		
		// MPropertyFriendlyName "direction only"
		bool m_bDirectionOnly; // 0x8ac		
	};
};
