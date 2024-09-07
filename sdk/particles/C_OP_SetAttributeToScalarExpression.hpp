#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetAttributeToScalarExpression : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::ScalarExpressionType_t m_nExpression; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CPerParticleFloatInput m_flInput1; // 0x1c8		
		// MPropertyFriendlyName "input 2"
		particleslib::CPerParticleFloatInput m_flInput2; // 0x328		
		// MPropertyFriendlyName "output"
		particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x488		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x5e8		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x5ec		
	};
};
