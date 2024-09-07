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
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_FadeAndKillForTracers : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "start fade in time"
		float m_flStartFadeInTime; // 0x1c0		
		// MPropertyFriendlyName "end fade in time"
		float m_flEndFadeInTime; // 0x1c4		
		// MPropertyFriendlyName "start fade out time"
		float m_flStartFadeOutTime; // 0x1c8		
		// MPropertyFriendlyName "end fade out time"
		float m_flEndFadeOutTime; // 0x1cc		
		// MPropertyFriendlyName "start alpha"
		float m_flStartAlpha; // 0x1d0		
		// MPropertyFriendlyName "end alpha"
		float m_flEndAlpha; // 0x1d4		
	};
};
