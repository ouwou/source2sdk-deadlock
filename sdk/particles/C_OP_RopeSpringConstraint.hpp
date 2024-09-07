#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x748
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RopeSpringConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "slack"
		particleslib::CParticleCollectionFloatInput m_flRestLength; // 0x1c0		
		// MPropertyFriendlyName "minimum segment length %"
		particleslib::CParticleCollectionFloatInput m_flMinDistance; // 0x320		
		// MPropertyFriendlyName "maximum segment length %"
		particleslib::CParticleCollectionFloatInput m_flMaxDistance; // 0x480		
		// MPropertyFriendlyName "scale factor for spring correction"
		float m_flAdjustmentScale; // 0x5e0		
	private:
		[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
	public:
		// MPropertyFriendlyName "manual resting spacing"
		particleslib::CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5e8		
	};
};
