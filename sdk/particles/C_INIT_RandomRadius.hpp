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
	class C_INIT_RandomRadius : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "radius min"
		// MPropertyAttributeRange "biased 0 500"
		float m_flRadiusMin; // 0x1c8		
		// MPropertyFriendlyName "radius max"
		// MPropertyAttributeRange "biased 0 500"
		float m_flRadiusMax; // 0x1cc		
		// MPropertyFriendlyName "radius random exponent"
		// MPropertyAttributeRange "-2 2"
		float m_flRadiusRandExponent; // 0x1d0		
	};
};
