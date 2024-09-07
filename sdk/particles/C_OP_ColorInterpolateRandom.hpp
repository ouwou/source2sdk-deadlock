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
	// Size: 0x200
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ColorInterpolateRandom : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "color fade min"
		Color m_ColorFadeMin; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x18]; // 0x1c4
	public:
		// MPropertyFriendlyName "color fade max"
		Color m_ColorFadeMax; // 0x1dc		
	private:
		[[maybe_unused]] uint8_t __pad01e0[0xc]; // 0x1e0
	public:
		// MPropertyFriendlyName "fade start time"
		float m_flFadeStartTime; // 0x1ec		
		// MPropertyFriendlyName "fade end time"
		float m_flFadeEndTime; // 0x1f0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4		
		// MPropertyFriendlyName "ease in and out"
		bool m_bEaseInOut; // 0x1f8		
	};
};
