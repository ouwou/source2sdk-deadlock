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
	class C_OP_RemapVelocityToVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "scale factor"
		float m_flScale; // 0x1c4		
		// MPropertyFriendlyName "normalize"
		bool m_bNormalize; // 0x1c8		
	};
};
