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
	class C_OP_RemapVectortoCP : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c4		
		// MPropertyFriendlyName "particle number to read"
		int32_t m_nParticleNumber; // 0x1c8		
	};
};
