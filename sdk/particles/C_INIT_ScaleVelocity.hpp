#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_ScaleVelocity : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "velocity scale"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecScale; // 0x1c8		
	};
};
