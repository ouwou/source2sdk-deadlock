#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_AgeNoise : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "absolute value"
		bool m_bAbsVal; // 0x1c8		
		// MPropertyFriendlyName "invert absolute value"
		bool m_bAbsValInv; // 0x1c9		
	private:
		[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
	public:
		// MPropertyFriendlyName "time coordinate offset"
		float m_flOffset; // 0x1cc		
		// MPropertyFriendlyName "start age minimum"
		float m_flAgeMin; // 0x1d0		
		// MPropertyFriendlyName "start age maximum"
		float m_flAgeMax; // 0x1d4		
		// MPropertyFriendlyName "time noise coordinate scale"
		float m_flNoiseScale; // 0x1d8		
		// MPropertyFriendlyName "spatial noise coordinate scale"
		float m_flNoiseScaleLoc; // 0x1dc		
		// MPropertyFriendlyName "spatial coordinate offset"
		// MVectorIsCoordinate
		Vector m_vecOffsetLoc; // 0x1e0		
	};
};
