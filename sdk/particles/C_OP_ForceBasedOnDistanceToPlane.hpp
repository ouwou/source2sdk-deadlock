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
	// Size: 0x208
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ForceBasedOnDistanceToPlane : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "min distance from plane"
		float m_flMinDist; // 0x1d0		
		// MPropertyFriendlyName "force at min distance"
		// MVectorIsCoordinate
		Vector m_vecForceAtMinDist; // 0x1d4		
		// MPropertyFriendlyName "max distance from plane"
		float m_flMaxDist; // 0x1e0		
		// MPropertyFriendlyName "force at max distance"
		// MVectorIsCoordinate
		Vector m_vecForceAtMaxDist; // 0x1e4		
		// MPropertyFriendlyName "plane normal"
		// MVectorIsCoordinate
		Vector m_vecPlaneNormal; // 0x1f0		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1fc		
		// MPropertyFriendlyName "exponent"
		float m_flExponent; // 0x200		
	};
};
