#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x230
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapQAnglesToRotation : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
	};
};
