#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xeb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DirectionBetweenVecsToVec : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "first vector"
		particleslib::CPerParticleVecInput m_vecPoint1; // 0x1c8		
		// MPropertyFriendlyName "second vector"
		particleslib::CPerParticleVecInput m_vecPoint2; // 0x840		
	};
};
