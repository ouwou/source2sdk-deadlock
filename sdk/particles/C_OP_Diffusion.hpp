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
	class C_OP_Diffusion : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Radius scale for particle influence"
		float m_flRadiusScale; // 0x1c0		
		// MPropertyFriendlyName "Output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
		int32_t m_nVoxelGridResolution; // 0x1c8		
	};
};
