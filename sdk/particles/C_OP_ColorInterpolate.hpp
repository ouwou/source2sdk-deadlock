#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ColorInterpolate : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "color fade"
		Color m_ColorFade; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0xc]; // 0x1c4
	public:
		// MPropertyFriendlyName "fade start time"
		float m_flFadeStartTime; // 0x1d0		
		// MPropertyFriendlyName "fade end time"
		float m_flFadeEndTime; // 0x1d4		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8		
		// MPropertyFriendlyName "ease in and out"
		bool m_bEaseInOut; // 0x1dc		
	};
};
