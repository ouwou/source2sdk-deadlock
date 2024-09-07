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
	class C_INIT_CreateFromCPs : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point increment amount"
		int32_t m_nIncrement; // 0x1c8		
		// MPropertyFriendlyName "starting control point"
		int32_t m_nMinCP; // 0x1cc		
		// MPropertyFriendlyName "ending control point"
		// MParticleMinVersion "2"
		int32_t m_nMaxCP; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "dynamic control point count"
		particleslib::CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1d8		
	};
};
