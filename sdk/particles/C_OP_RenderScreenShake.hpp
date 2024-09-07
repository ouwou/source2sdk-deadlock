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
	class C_OP_RenderScreenShake : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "duration scale"
		float m_flDurationScale; // 0x210		
		// MPropertyFriendlyName "radius scale"
		float m_flRadiusScale; // 0x214		
		// MPropertyFriendlyName "frequence scale"
		float m_flFrequencyScale; // 0x218		
		// MPropertyFriendlyName "amplitude scale"
		float m_flAmplitudeScale; // 0x21c		
		// MPropertyFriendlyName "radius field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nRadiusField; // 0x220		
		// MPropertyFriendlyName "duration field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nDurationField; // 0x224		
		// MPropertyFriendlyName "frequency field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFrequencyField; // 0x228		
		// MPropertyFriendlyName "amplitude field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nAmplitudeField; // 0x22c		
		// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
		int32_t m_nFilterCP; // 0x230		
	};
};
