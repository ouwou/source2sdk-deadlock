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
	class C_OP_OrientTo2dDirection : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "rotation offset"
		float m_flRotOffset; // 0x1c0		
		// MPropertyFriendlyName "spin strength"
		float m_flSpinStrength; // 0x1c4		
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
	};
};
