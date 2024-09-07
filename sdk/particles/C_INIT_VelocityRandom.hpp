#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CRandomNumberGeneratorParameters.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1190
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_VelocityRandom : public particles::CParticleFunctionInitializer
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
		// MPropertyFriendlyName "speed in local coordinate system min"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x490		
		// MPropertyFriendlyName "speed in local coordinate system max"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xb08		
		// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
		bool m_bIgnoreDT; // 0x1180		
	private:
		[[maybe_unused]] uint8_t __pad1181[0x3]; // 0x1181
	public:
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1184		
	};
};
