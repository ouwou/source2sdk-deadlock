#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x490
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ReadFromNeighboringParticle : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "read field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0		
		// MPropertyFriendlyName "written field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "particle increment amount"
		int32_t m_nIncrement; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "maximum distance"
		particleslib::CPerParticleFloatInput m_DistanceCheck; // 0x1d0		
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x330		
	};
};
