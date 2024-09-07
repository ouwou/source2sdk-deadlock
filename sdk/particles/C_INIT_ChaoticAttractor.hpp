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
	class C_INIT_ChaoticAttractor : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "pickover A parameter"
		float m_flAParm; // 0x1c8		
		// MPropertyFriendlyName "pickover B parameter"
		float m_flBParm; // 0x1cc		
		// MPropertyFriendlyName "pickover C parameter"
		float m_flCParm; // 0x1d0		
		// MPropertyFriendlyName "pickover D parameter"
		float m_flDParm; // 0x1d4		
		// MPropertyFriendlyName "scale"
		float m_flScale; // 0x1d8		
		// MPropertyFriendlyName "speed min"
		float m_flSpeedMin; // 0x1dc		
		// MPropertyFriendlyName "speed max"
		float m_flSpeedMax; // 0x1e0		
		// MPropertyFriendlyName "relative control point number"
		int32_t m_nBaseCP; // 0x1e4		
		// MPropertyFriendlyName "uniform speed"
		bool m_bUniformSpeed; // 0x1e8		
	};
};
