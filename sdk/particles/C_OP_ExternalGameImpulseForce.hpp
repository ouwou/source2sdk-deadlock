#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ExternalGameImpulseForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "force scale"
		particleslib::CPerParticleFloatInput m_flForceScale; // 0x1d0		
		// MPropertyFriendlyName "rope shake"
		bool m_bRopes; // 0x330		
		// MPropertyFriendlyName "limit rope impulses to Z"
		bool m_bRopesZOnly; // 0x331		
		// MPropertyFriendlyName "explosions"
		bool m_bExplosions; // 0x332		
		// MPropertyFriendlyName "particle systems"
		bool m_bParticles; // 0x333		
	};
};
