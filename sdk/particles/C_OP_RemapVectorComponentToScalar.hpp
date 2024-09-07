#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapVectorComponentToScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Input Vector"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0		
		// MPropertyFriendlyName "Output Scalar"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "Vector Component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent; // 0x1c8		
	};
};
