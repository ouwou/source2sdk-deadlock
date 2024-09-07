#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_DistanceCull : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nControlPoint; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "cull distance"
		particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1d0		
		// MPropertyFriendlyName "cull inside instead of outside"
		bool m_bCullInside; // 0x330		
	};
};
