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
	// Size: 0x8b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_MoveBetweenPoints : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "minimum speed"
		particleslib::CPerParticleFloatInput m_flSpeedMin; // 0x1c8		
		// MPropertyFriendlyName "maximum speed"
		particleslib::CPerParticleFloatInput m_flSpeedMax; // 0x328		
		// MPropertyFriendlyName "end spread"
		particleslib::CPerParticleFloatInput m_flEndSpread; // 0x488		
		// MPropertyFriendlyName "start offset"
		particleslib::CPerParticleFloatInput m_flStartOffset; // 0x5e8		
		// MPropertyFriendlyName "end offset"
		particleslib::CPerParticleFloatInput m_flEndOffset; // 0x748		
		// MPropertyFriendlyName "end control point"
		int32_t m_nEndControlPointNumber; // 0x8a8		
		// MPropertyFriendlyName "bias lifetime by trail length"
		bool m_bTrailBias; // 0x8ac		
	};
};
