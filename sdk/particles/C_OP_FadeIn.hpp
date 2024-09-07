#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_FadeIn : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "fade in time min"
		float m_flFadeInTimeMin; // 0x1c0		
		// MPropertyFriendlyName "fade in time max"
		float m_flFadeInTimeMax; // 0x1c4		
		// MPropertyFriendlyName "fade in time exponent"
		float m_flFadeInTimeExp; // 0x1c8		
		// MPropertyFriendlyName "proportional 0/1"
		bool m_bProportional; // 0x1cc		
	};
};
