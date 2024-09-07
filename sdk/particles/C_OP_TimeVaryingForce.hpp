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
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_TimeVaryingForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "time to start transition"
		float m_flStartLerpTime; // 0x1d0		
		// MPropertyFriendlyName "starting force"
		// MVectorIsCoordinate
		Vector m_StartingForce; // 0x1d4		
		// MPropertyFriendlyName "time to end transition"
		float m_flEndLerpTime; // 0x1e0		
		// MPropertyFriendlyName "ending force"
		// MVectorIsCoordinate
		Vector m_EndingForce; // 0x1e4		
	};
};
