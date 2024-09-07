#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleVRHandChoiceList_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x380
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderVRHapticEvent : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "haptic hand"
		particles::ParticleVRHandChoiceList_t m_nHand; // 0x210		
		// MPropertyFriendlyName "hand control point number"
		int32_t m_nOutputHandCP; // 0x214		
		// MPropertyFriendlyName "cp field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutputField; // 0x218		
	private:
		[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
	public:
		// MPropertyFriendlyName "amplitude"
		particleslib::CPerParticleFloatInput m_flAmplitude; // 0x220		
	};
};
