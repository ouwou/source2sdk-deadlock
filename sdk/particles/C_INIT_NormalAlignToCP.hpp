#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleControlPointAxis_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_NormalAlignToCP : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "input"
		particleslib::CParticleTransformInput m_transformInput; // 0x1c8		
		// MPropertyFriendlyName "control point axis"
		particles::ParticleControlPointAxis_t m_nControlPointAxis; // 0x230		
	};
};
