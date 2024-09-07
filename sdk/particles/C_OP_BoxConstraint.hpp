#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xeb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_BoxConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "min coords"
		particleslib::CParticleCollectionVecInput m_vecMin; // 0x1c0		
		// MPropertyFriendlyName "max coords"
		particleslib::CParticleCollectionVecInput m_vecMax; // 0x838		
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0xeb0		
		// MPropertyFriendlyName "use local space"
		bool m_bLocalSpace; // 0xeb4		
		// MPropertyFriendlyName "Take radius into account"
		bool m_bAccountForRadius; // 0xeb5		
	};
};
