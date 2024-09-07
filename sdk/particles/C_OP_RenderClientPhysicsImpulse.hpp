#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderClientPhysicsImpulse : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "radius"
		particleslib::CPerParticleFloatInput m_flRadius; // 0x210		
		// MPropertyFriendlyName "magnitude"
		particleslib::CPerParticleFloatInput m_flMagnitude; // 0x370		
		// MPropertyFriendlyName "filter explosion to single simulation id"
		int32_t m_nSimIdFilter; // 0x4d0		
	};
};
