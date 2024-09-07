#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xb08
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_LerpToInitialPosition : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c8		
		// MPropertyFriendlyName "position cache attribute"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nCacheField; // 0x328		
	private:
		[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
	public:
		// MPropertyFriendlyName "scale"
		particleslib::CParticleCollectionFloatInput m_flScale; // 0x330		
		// MPropertyFriendlyName "component scale"
		particleslib::CParticleCollectionVecInput m_vecScale; // 0x490		
	};
};
