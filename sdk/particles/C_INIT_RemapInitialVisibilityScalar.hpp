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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapInitialVisibilityScalar : public particles::CParticleFunctionInitializer
	{
	private:
		[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "visibility minimum"
		float m_flInputMin; // 0x1d0		
		// MPropertyFriendlyName "visibility maximum"
		float m_flInputMax; // 0x1d4		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d8		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1dc		
	};
};
