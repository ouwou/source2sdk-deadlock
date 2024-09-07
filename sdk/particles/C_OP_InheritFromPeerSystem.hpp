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
	class C_OP_InheritFromPeerSystem : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "read field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "written field"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c4		
		// MPropertyFriendlyName "particle neighbor increment amount"
		int32_t m_nIncrement; // 0x1c8		
		// MPropertyFriendlyName "group id"
		int32_t m_nGroupID; // 0x1cc		
	};
};
