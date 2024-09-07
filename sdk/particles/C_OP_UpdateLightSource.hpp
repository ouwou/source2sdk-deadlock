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
	class C_OP_UpdateLightSource : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "color tint"
		Color m_vColorTint; // 0x1c0		
		// MPropertyFriendlyName "amount to multiply light brightness by"
		float m_flBrightnessScale; // 0x1c4		
		// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
		float m_flRadiusScale; // 0x1c8		
		// MPropertyFriendlyName "minimum radius for created lights"
		float m_flMinimumLightingRadius; // 0x1cc		
		// MPropertyFriendlyName "maximum radius for created lights"
		float m_flMaximumLightingRadius; // 0x1d0		
		// MPropertyFriendlyName "amount of damping of changes"
		float m_flPositionDampingConstant; // 0x1d4		
	};
};
