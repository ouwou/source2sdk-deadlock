#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x5e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ColorAdjustHSL : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "hue adjust"
		particleslib::CPerParticleFloatInput m_flHueAdjust; // 0x1c0		
		// MPropertyFriendlyName "saturation adjust"
		particleslib::CPerParticleFloatInput m_flSaturationAdjust; // 0x320		
		// MPropertyFriendlyName "lightness adjust"
		particleslib::CPerParticleFloatInput m_flLightnessAdjust; // 0x480		
	};
};
