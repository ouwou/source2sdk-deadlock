#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderTreeShake : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "peak strength"
		float m_flPeakStrength; // 0x210		
		// MPropertyFriendlyName "peak strength field override"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x214		
		// MPropertyFriendlyName "radius"
		float m_flRadius; // 0x218		
		// MPropertyFriendlyName "strength field override"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x21c		
		// MPropertyFriendlyName "shake duration after end"
		float m_flShakeDuration; // 0x220		
		// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
		float m_flTransitionTime; // 0x224		
		// MPropertyFriendlyName "Twist amount (-1..1)"
		float m_flTwistAmount; // 0x228		
		// MPropertyFriendlyName "Radial Amount (-1..1)"
		float m_flRadialAmount; // 0x22c		
		// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
		float m_flControlPointOrientationAmount; // 0x230		
		// MPropertyFriendlyName "Control Point for Orientation Amount"
		int32_t m_nControlPointForLinearDirection; // 0x234		
	};
};
