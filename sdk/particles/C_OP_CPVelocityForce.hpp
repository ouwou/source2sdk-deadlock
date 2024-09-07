#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
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
	class C_OP_CPVelocityForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nControlPointNumber; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "velocity scale"
		particleslib::CPerParticleFloatInput m_flScale; // 0x1d8		
	};
};
