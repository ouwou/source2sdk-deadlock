#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_OscillateVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "oscillation rate min"
		// MVectorIsSometimesCoordinate "m_nField"
		Vector m_RateMin; // 0x1c0		
		// MPropertyFriendlyName "oscillation rate max"
		// MVectorIsSometimesCoordinate "m_nField"
		Vector m_RateMax; // 0x1cc		
		// MPropertyFriendlyName "oscillation frequency min"
		// MVectorIsSometimesCoordinate "m_nField"
		Vector m_FrequencyMin; // 0x1d8		
		// MPropertyFriendlyName "oscillation frequency max"
		// MVectorIsSometimesCoordinate "m_nField"
		Vector m_FrequencyMax; // 0x1e4		
		// MPropertyFriendlyName "oscillation field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nField; // 0x1f0		
		// MPropertyFriendlyName "proportional 0/1"
		bool m_bProportional; // 0x1f4		
		// MPropertyFriendlyName "start/end proportional"
		bool m_bProportionalOp; // 0x1f5		
		// MPropertyFriendlyName "offset instead of accelerate position"
		bool m_bOffset; // 0x1f6		
	private:
		[[maybe_unused]] uint8_t __pad01f7[0x1]; // 0x1f7
	public:
		// MPropertyFriendlyName "start time min"
		float m_flStartTime_min; // 0x1f8		
		// MPropertyFriendlyName "start time max"
		float m_flStartTime_max; // 0x1fc		
		// MPropertyFriendlyName "end time min"
		float m_flEndTime_min; // 0x200		
		// MPropertyFriendlyName "end time max"
		float m_flEndTime_max; // 0x204		
		// MPropertyFriendlyName "oscillation multiplier"
		particleslib::CPerParticleFloatInput m_flOscMult; // 0x208		
		// MPropertyFriendlyName "oscillation start phase"
		particleslib::CPerParticleFloatInput m_flOscAdd; // 0x368		
		// MPropertyFriendlyName "rate scale"
		particleslib::CPerParticleFloatInput m_flRateScale; // 0x4c8		
	};
};
