#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x328
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetSimulationRate : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "simulation timescale"
		particleslib::CParticleCollectionFloatInput m_flSimulationScale; // 0x1c8		
	};
};
