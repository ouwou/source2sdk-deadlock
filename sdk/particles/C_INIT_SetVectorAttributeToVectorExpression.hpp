#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	class C_INIT_SetVectorAttributeToVectorExpression : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::VectorExpressionType_t m_nExpression; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CPerParticleVecInput m_vInput1; // 0x1d0		
		// MPropertyFriendlyName "input 2"
		particleslib::CPerParticleVecInput m_vInput2; // 0x848		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOutputField; // 0xec0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0xec4		
		// MPropertyFriendlyName "normalize result"
		bool m_bNormalizedOutput; // 0xec8		
	};
};
