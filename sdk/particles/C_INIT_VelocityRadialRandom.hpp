#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_VelocityRadialRandom : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "random speed min"
		particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1d0		
		// MPropertyFriendlyName "random speed max"
		particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x330		
		// MPropertyFriendlyName "local space scale"
		Vector m_vecLocalCoordinateSystemSpeedScale; // 0x490		
	private:
		[[maybe_unused]] uint8_t __pad049c[0x1]; // 0x49c
	public:
		// MPropertyFriendlyName "ignore delta time"
		bool m_bIgnoreDelta; // 0x49d		
	};
};
