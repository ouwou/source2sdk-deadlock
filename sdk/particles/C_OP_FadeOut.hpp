#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x210
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_FadeOut : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "fade out time min"
		float m_flFadeOutTimeMin; // 0x1c0		
		// MPropertyFriendlyName "fade out time max"
		float m_flFadeOutTimeMax; // 0x1c4		
		// MPropertyFriendlyName "fade out time exponent"
		float m_flFadeOutTimeExp; // 0x1c8		
		// MPropertyFriendlyName "fade bias"
		float m_flFadeBias; // 0x1cc		
	private:
		[[maybe_unused]] uint8_t __pad01d0[0x30]; // 0x1d0
	public:
		// MPropertyFriendlyName "proportional 0/1"
		bool m_bProportional; // 0x200		
		// MPropertyFriendlyName "ease in and out"
		bool m_bEaseInAndOut; // 0x201		
	};
};
