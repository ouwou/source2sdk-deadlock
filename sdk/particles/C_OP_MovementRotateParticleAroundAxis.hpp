#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xa08
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MovementRotateParticleAroundAxis : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "rotation axis"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x1c0		
		// MPropertyFriendlyName "rotation rate"
		particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x838		
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x998		
		// MPropertyFriendlyName "use local space"
		bool m_bLocalSpace; // 0xa00		
	};
};
