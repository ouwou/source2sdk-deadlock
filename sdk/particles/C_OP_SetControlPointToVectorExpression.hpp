#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/VectorExpressionType_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xec8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointToVectorExpression : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "expression"
		particles::VectorExpressionType_t m_nExpression; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputCP; // 0x1cc		
		// MPropertyFriendlyName "input 1"
		particleslib::CParticleCollectionVecInput m_vInput1; // 0x1d0		
		// MPropertyFriendlyName "input 2"
		particleslib::CParticleCollectionVecInput m_vInput2; // 0x848		
		// MPropertyFriendlyName "normalize result"
		bool m_bNormalizedOutput; // 0xec0		
	};
};
