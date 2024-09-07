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
	class C_INIT_RandomLifeTime : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "lifetime min"
		// MPropertyAttributeRange "0 20"
		float m_fLifetimeMin; // 0x1c8		
		// MPropertyFriendlyName "lifetime max"
		// MPropertyAttributeRange "0 20"
		float m_fLifetimeMax; // 0x1cc		
		// MPropertyFriendlyName "lifetime random exponent"
		float m_fLifetimeRandExponent; // 0x1d0		
	};
};
