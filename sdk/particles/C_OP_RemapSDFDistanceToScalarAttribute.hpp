#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	class C_OP_RemapSDFDistanceToScalarAttribute : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "Input field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4		
		// MPropertyFriendlyName "Minimum distance"
		particleslib::CParticleCollectionFloatInput m_flMinDistance; // 0x1c8		
		// MPropertyFriendlyName "Maximum distance"
		particleslib::CParticleCollectionFloatInput m_flMaxDistance; // 0x328		
		// MPropertyFriendlyName "Value for dist<min"
		particleslib::CParticleCollectionFloatInput m_flValueBelowMin; // 0x488		
		// MPropertyFriendlyName "Value for dist=min"
		particleslib::CParticleCollectionFloatInput m_flValueAtMin; // 0x5e8		
		// MPropertyFriendlyName "Value for dist=max"
		particleslib::CParticleCollectionFloatInput m_flValueAtMax; // 0x748		
		// MPropertyFriendlyName "Value for dist>max"
		particleslib::CParticleCollectionFloatInput m_flValueAboveMax; // 0x8a8		
	};
};
