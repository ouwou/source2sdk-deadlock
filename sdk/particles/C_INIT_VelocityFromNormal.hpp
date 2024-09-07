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
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_VelocityFromNormal : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "random speed min"
		float m_fSpeedMin; // 0x1c8		
		// MPropertyFriendlyName "random speed max"
		float m_fSpeedMax; // 0x1cc		
		// MPropertyFriendlyName "ignore delta time"
		bool m_bIgnoreDt; // 0x1d0		
	};
};
