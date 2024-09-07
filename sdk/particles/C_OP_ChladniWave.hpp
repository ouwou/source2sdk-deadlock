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
	// Size: 0x1448
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ChladniWave : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "wave minimum"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8		
		// MPropertyFriendlyName "wave maximum"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x328		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8		
		// MPropertyFriendlyName "wave length"
		particleslib::CPerParticleVecInput m_vecWaveLength; // 0x748		
		// MPropertyFriendlyName "harmonics"
		particleslib::CPerParticleVecInput m_vecHarmonics; // 0xdc0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1438		
		// MPropertyFriendlyName "local space control point"
		int32_t m_nLocalSpaceControlPoint; // 0x143c		
		// MPropertyFriendlyName "3D"
		bool m_b3D; // 0x1440		
	};
};
