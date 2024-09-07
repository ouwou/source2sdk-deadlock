#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderFlattenGrass : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "flattening strength"
		float m_flFlattenStrength; // 0x210		
		// MPropertyFriendlyName "strength field override"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x214		
		// MPropertyFriendlyName "radius scale"
		float m_flRadiusScale; // 0x218		
	};
};
