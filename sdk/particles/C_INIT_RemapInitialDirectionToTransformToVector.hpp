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
	// Size: 0x250
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapInitialDirectionToTransformToVector : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230		
		// MPropertyFriendlyName "scale factor"
		float m_flScale; // 0x234		
		// MPropertyFriendlyName "offset rotation"
		float m_flOffsetRot; // 0x238		
		// MPropertyFriendlyName "offset axis"
		// MVectorIsCoordinate
		Vector m_vecOffsetAxis; // 0x23c		
		// MPropertyFriendlyName "normalize"
		bool m_bNormalize; // 0x248		
	};
};
