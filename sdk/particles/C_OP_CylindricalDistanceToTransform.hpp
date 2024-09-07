#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x820
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CylindricalDistanceToTransform : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "cylinder inner radius"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8		
		// MPropertyFriendlyName "cylinder outer radius"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x328		
		// MPropertyFriendlyName "cylinder inner output"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488		
		// MPropertyFriendlyName "cylinder outer output"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8		
		// MPropertyFriendlyName "cylindrical top transform"
		particleslib::CParticleTransformInput m_TransformStart; // 0x748		
		// MPropertyFriendlyName "cylindrical bottom transform"
		particleslib::CParticleTransformInput m_TransformEnd; // 0x7b0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x818		
		// MPropertyFriendlyName "only active within specified distance"
		bool m_bActiveRange; // 0x81c		
		// MPropertyFriendlyName "output is additive"
		bool m_bAdditive; // 0x81d		
		// MPropertyFriendlyName "apply radius to ends (capsule)"
		bool m_bCapsule; // 0x81e		
	};
};
