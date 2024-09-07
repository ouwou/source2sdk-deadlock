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
	// Size: 0x1f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreationNoise : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "absolute value"
		bool m_bAbsVal; // 0x1cc		
		// MPropertyFriendlyName "invert absolute value"
		bool m_bAbsValInv; // 0x1cd		
	private:
		[[maybe_unused]] uint8_t __pad01ce[0x2]; // 0x1ce
	public:
		// MPropertyFriendlyName "time coordinate offset"
		float m_flOffset; // 0x1d0		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d4		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d8		
		// MPropertyFriendlyName "time noise coordinate scale"
		float m_flNoiseScale; // 0x1dc		
		// MPropertyFriendlyName "spatial noise coordinate scale"
		float m_flNoiseScaleLoc; // 0x1e0		
		// MPropertyFriendlyName "spatial coordinate offset"
		// MVectorIsCoordinate
		Vector m_vecOffsetLoc; // 0x1e4		
		// MPropertyFriendlyName "world time noise coordinate scale"
		float m_flWorldTimeScale; // 0x1f0		
	};
};
