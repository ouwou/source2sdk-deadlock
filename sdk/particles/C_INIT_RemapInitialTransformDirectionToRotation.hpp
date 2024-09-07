#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x240
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapInitialTransformDirectionToRotation : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230		
		// MPropertyFriendlyName "offset rotation"
		float m_flOffsetRot; // 0x234		
		// MPropertyFriendlyName "control point axis"
		// MPropertyAttributeChoiceName "vector_component"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		int32_t m_nComponent; // 0x238		
	};
};
