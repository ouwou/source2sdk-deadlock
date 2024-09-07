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
	// Size: 0x488
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SDFConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "min dist to sdf"
		particleslib::CParticleCollectionFloatInput m_flMinDist; // 0x1c0		
		// MPropertyFriendlyName "max dist to sdf"
		particleslib::CParticleCollectionFloatInput m_flMaxDist; // 0x320		
		// MPropertyFriendlyName "Max # of iterations"
		int32_t m_nMaxIterations; // 0x480		
	};
};
