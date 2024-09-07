#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_Orient2DRelToCP : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x1c8		
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "rotation offset"
		float m_flRotOffset; // 0x1d0		
	};
};
