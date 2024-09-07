#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x480
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CollideWithSelf : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "particle radius scale"
		particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x1c0		
		// MPropertyFriendlyName "minimum speed for check"
		particleslib::CPerParticleFloatInput m_flMinimumSpeed; // 0x320		
	};
};
