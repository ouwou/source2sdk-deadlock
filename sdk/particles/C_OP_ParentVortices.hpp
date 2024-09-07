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
	class C_OP_ParentVortices : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "amount of force"
		float m_flForceScale; // 0x1d0		
		// MPropertyFriendlyName "twist axis"
		// MVectorIsCoordinate
		Vector m_vecTwistAxis; // 0x1d4		
		// MPropertyFriendlyName "flip twist axis with yaw"
		bool m_bFlipBasedOnYaw; // 0x1e0		
	};
};
