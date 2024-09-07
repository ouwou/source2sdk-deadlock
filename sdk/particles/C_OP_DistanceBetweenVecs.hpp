#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1440
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DistanceBetweenVecs : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "first vector"
		particleslib::CPerParticleVecInput m_vecPoint1; // 0x1c8		
		// MPropertyFriendlyName "second vector"
		particleslib::CPerParticleVecInput m_vecPoint2; // 0x840		
		// MPropertyFriendlyName "distance minimum"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0xeb8		
		// MPropertyFriendlyName "distance maximum"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x1018		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x1178		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x12d8		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1438		
		// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
		bool m_bDeltaTime; // 0x143c		
	};
};
