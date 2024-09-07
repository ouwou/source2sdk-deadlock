#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/VectorFloatExpressionType_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleRemapFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1028
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointFieldFromVectorExpression : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::VectorFloatExpressionType_t m_nExpression; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "input 1"
		particleslib::CParticleCollectionVecInput m_vecInput1; // 0x1d0		
		// MPropertyFriendlyName "input 2"
		particleslib::CParticleCollectionVecInput m_vecInput2; // 0x848		
		// MPropertyFriendlyName "output"
		particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0xec0		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputCP; // 0x1020		
		// MPropertyFriendlyName "output component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutVectorField; // 0x1024		
	};
};
