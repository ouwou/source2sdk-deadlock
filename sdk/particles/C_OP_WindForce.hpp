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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_WindForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "force to apply"
		// MVectorIsCoordinate
		Vector m_vForce; // 0x1d0		
	};
};
