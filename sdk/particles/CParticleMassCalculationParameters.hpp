#pragma once
#include "particles/ParticleMassMode_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x428
	// 
	// MGetKV3ClassDefaults
	class CParticleMassCalculationParameters
	{
	public:
		// MPropertyFriendlyName "Radius calculation mode"
		particles::ParticleMassMode_t m_nMassMode; // 0x0		
		// MPropertyFriendlyName "Radius input"
		particleslib::CPerParticleFloatInput m_flRadius; // 0x8		
		// MPropertyFriendlyName "Nominal radius value"
		particleslib::CPerParticleFloatInput m_flNominalRadius; // 0x168		
		// MPropertyFriendlyName "Scale to apply to result"
		particleslib::CPerParticleFloatInput m_flScale; // 0x2c8		
	};
};
