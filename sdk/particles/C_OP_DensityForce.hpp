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
	class C_OP_DensityForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "Radius scale for particle influence"
		float m_flRadiusScale; // 0x1d0		
		// MPropertyFriendlyName "Scale of force"
		float m_flForceScale; // 0x1d4		
		// MPropertyFriendlyName "Target density"
		float m_flTargetDensity; // 0x1d8		
	};
};
