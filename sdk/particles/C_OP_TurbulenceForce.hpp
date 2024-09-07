#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x210
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_TurbulenceForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "noise scale 0"
		float m_flNoiseCoordScale0; // 0x1d0		
		// MPropertyFriendlyName "noise scale 1"
		float m_flNoiseCoordScale1; // 0x1d4		
		// MPropertyFriendlyName "noise scale 2"
		float m_flNoiseCoordScale2; // 0x1d8		
		// MPropertyFriendlyName "noise scale 3"
		float m_flNoiseCoordScale3; // 0x1dc		
		// MPropertyFriendlyName "noise amount 0"
		// MVectorIsCoordinate
		Vector m_vecNoiseAmount0; // 0x1e0		
		// MPropertyFriendlyName "noise amount 1"
		// MVectorIsCoordinate
		Vector m_vecNoiseAmount1; // 0x1ec		
		// MPropertyFriendlyName "noise amount 2"
		// MVectorIsCoordinate
		Vector m_vecNoiseAmount2; // 0x1f8		
		// MPropertyFriendlyName "noise amount 3"
		// MVectorIsCoordinate
		Vector m_vecNoiseAmount3; // 0x204		
	};
};
