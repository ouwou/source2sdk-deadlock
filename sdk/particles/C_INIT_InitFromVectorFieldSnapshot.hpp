#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitFromVectorFieldSnapshot : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "local space control point number"
		int32_t m_nLocalSpaceCP; // 0x1cc		
		// MPropertyFriendlyName "weight update control point"
		int32_t m_nWeightUpdateCP; // 0x1d0		
		// MPropertyFriendlyName "use vertical velocity for weighting"
		bool m_bUseVerticalVelocity; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
	public:
		// MPropertyFriendlyName "Component Scale"
		particleslib::CPerParticleVecInput m_vecScale; // 0x1d8		
	};
};
