#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ScalarExpressionType_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleRemapFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x5f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointFieldToScalarExpression : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::ScalarExpressionType_t m_nExpression; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CParticleCollectionFloatInput m_flInput1; // 0x1d0		
		// MPropertyFriendlyName "input 2"
		particleslib::CParticleCollectionFloatInput m_flInput2; // 0x330		
		// MPropertyFriendlyName "output"
		particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x490		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputCP; // 0x5f0		
		// MPropertyFriendlyName "output component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutVectorField; // 0x5f4		
	};
};
