#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	// 
	// MObsoleteParticleFunction
	// MGetKV3ClassDefaults
	class C_OP_RenderScreenVelocityRotate : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "rotate rate(dps)"
		float m_flRotateRateDegrees; // 0x210		
		// MPropertyFriendlyName "forward angle"
		float m_flForwardDegrees; // 0x214		
	};
};
