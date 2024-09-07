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
	// Size: 0x488
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ClampScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x1c8		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x328		
	};
};