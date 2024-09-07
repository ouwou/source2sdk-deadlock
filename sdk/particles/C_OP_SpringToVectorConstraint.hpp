#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xdb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SpringToVectorConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "slack"
		particleslib::CPerParticleFloatInput m_flRestLength; // 0x1c0		
		// MPropertyFriendlyName "minimum segment length %"
		particleslib::CPerParticleFloatInput m_flMinDistance; // 0x320		
		// MPropertyFriendlyName "maximum segment length %"
		particleslib::CPerParticleFloatInput m_flMaxDistance; // 0x480		
		// MPropertyFriendlyName "resting spacing"
		particleslib::CPerParticleFloatInput m_flRestingLength; // 0x5e0		
		// MPropertyFriendlyName "anchor vector"
		particleslib::CPerParticleVecInput m_vecAnchorVector; // 0x740		
	};
};
