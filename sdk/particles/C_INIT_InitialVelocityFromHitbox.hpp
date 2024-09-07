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
	// Size: 0x258
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitialVelocityFromHitbox : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "velocity minimum"
		float m_flVelocityMin; // 0x1c8		
		// MPropertyFriendlyName "velocity maximum"
		float m_flVelocityMax; // 0x1cc		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1d0		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x1d4		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x254		
	};
};
