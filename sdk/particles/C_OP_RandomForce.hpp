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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RandomForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "min force"
		// MVectorIsCoordinate
		Vector m_MinForce; // 0x1d0		
		// MPropertyFriendlyName "max force"
		// MVectorIsCoordinate
		Vector m_MaxForce; // 0x1dc		
	};
};
