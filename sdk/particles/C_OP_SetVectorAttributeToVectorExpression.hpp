#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/VectorExpressionType_t.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0xf30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetVectorAttributeToVectorExpression : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::VectorExpressionType_t m_nExpression; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CPerParticleVecInput m_vInput1; // 0x1c8		
		// MPropertyFriendlyName "input 2"
		particleslib::CPerParticleVecInput m_vInput2; // 0x840		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0xeb8		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0xebc		
		// MPropertyFriendlyName "normalize result"
		bool m_bNormalizedOutput; // 0xec0		
	};
};
