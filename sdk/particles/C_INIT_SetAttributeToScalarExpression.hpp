#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/ScalarExpressionType_t.hpp"
#include "particleslib/CParticleRemapFloatInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_SetAttributeToScalarExpression : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::ScalarExpressionType_t m_nExpression; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CPerParticleFloatInput m_flInput1; // 0x1d0		
		// MPropertyFriendlyName "input 2"
		particleslib::CPerParticleFloatInput m_flInput2; // 0x330		
		// MPropertyFriendlyName "output"
		particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x490		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x5f0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x5f4		
	};
};
