#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetGravityToCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point to sample gravity"
		int32_t m_nCPInput; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nCPOutput; // 0x1cc		
		// MPropertyFriendlyName "gravity scale"
		particleslib::CParticleCollectionFloatInput m_flScale; // 0x1d0		
		// MPropertyFriendlyName "set orientation"
		bool m_bSetOrientation; // 0x330		
		// MPropertyFriendlyName "set gravity orientation to Z Down (instead of X)"
		// MPropertySuppressExpr "!m_bSetOrientation"
		bool m_bSetZDown; // 0x331		
	};
};
