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
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_OscillateScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "oscillation rate min"
		float m_RateMin; // 0x1c0		
		// MPropertyFriendlyName "oscillation rate max"
		float m_RateMax; // 0x1c4		
		// MPropertyFriendlyName "oscillation frequency min"
		float m_FrequencyMin; // 0x1c8		
		// MPropertyFriendlyName "oscillation frequency max"
		float m_FrequencyMax; // 0x1cc		
		// MPropertyFriendlyName "oscillation field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nField; // 0x1d0		
		// MPropertyFriendlyName "proportional 0/1"
		bool m_bProportional; // 0x1d4		
		// MPropertyFriendlyName "start/end proportional"
		bool m_bProportionalOp; // 0x1d5		
	private:
		[[maybe_unused]] uint8_t __pad01d6[0x2]; // 0x1d6
	public:
		// MPropertyFriendlyName "start time min"
		float m_flStartTime_min; // 0x1d8		
		// MPropertyFriendlyName "start time max"
		float m_flStartTime_max; // 0x1dc		
		// MPropertyFriendlyName "end time min"
		float m_flEndTime_min; // 0x1e0		
		// MPropertyFriendlyName "end time max"
		float m_flEndTime_max; // 0x1e4		
		// MPropertyFriendlyName "oscillation multiplier"
		float m_flOscMult; // 0x1e8		
		// MPropertyFriendlyName "oscillation start phase"
		float m_flOscAdd; // 0x1ec		
	};
};
