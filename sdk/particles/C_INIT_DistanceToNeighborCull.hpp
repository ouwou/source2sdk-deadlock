#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x330
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_DistanceToNeighborCull : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "cull distance"
		particleslib::CPerParticleFloatInput m_flDistance; // 0x1c8		
		// MPropertyFriendlyName "include particle radius"
		bool m_bIncludeRadii; // 0x328		
	};
};
