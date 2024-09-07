#pragma once
#include "particles/CParticleFunctionForce.hpp"
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
	// Size: 0x9b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PerParticleForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "force scale"
		particleslib::CPerParticleFloatInput m_flForceScale; // 0x1d0		
		// MPropertyFriendlyName "force to apply"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vForce; // 0x330		
		// MPropertyFriendlyName "local space control point"
		int32_t m_nCP; // 0x9a8		
	};
};
