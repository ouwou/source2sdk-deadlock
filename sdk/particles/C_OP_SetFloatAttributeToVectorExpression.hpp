#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/VectorFloatExpressionType_t.hpp"
#include "particleslib/CParticleRemapFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1020
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetFloatAttributeToVectorExpression : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::VectorFloatExpressionType_t m_nExpression; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CPerParticleVecInput m_vInput1; // 0x1c8		
		// MPropertyFriendlyName "input 2"
		particleslib::CPerParticleVecInput m_vInput2; // 0x840		
		// MPropertyFriendlyName "output"
		particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0xeb8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0x1018		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x101c		
	};
};
