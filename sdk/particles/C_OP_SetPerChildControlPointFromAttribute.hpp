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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetPerChildControlPointFromAttribute : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c0		
		// MPropertyFriendlyName "control point to set"
		int32_t m_nFirstControlPoint; // 0x1c4		
		// MPropertyFriendlyName "# of children to set"
		int32_t m_nNumControlPoints; // 0x1c8		
		// MPropertyFriendlyName "particle increment amount"
		int32_t m_nParticleIncrement; // 0x1cc		
		// MPropertyFriendlyName "first particle to copy"
		int32_t m_nFirstSourcePoint; // 0x1d0		
		// MPropertyFriendlyName "set number of children based on particle count"
		bool m_bNumBasedOnParticleCount; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
	public:
		// MPropertyFriendlyName "field to read"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1d8		
		// MPropertyFriendlyName "control point field for scalars"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nCPField; // 0x1dc		
	};
};
