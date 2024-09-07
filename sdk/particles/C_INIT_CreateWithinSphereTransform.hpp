#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
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
	// Size: 0x1b40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateWithinSphereTransform : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "distance min"
		particleslib::CPerParticleFloatInput m_fRadiusMin; // 0x1c8		
		// MPropertyFriendlyName "distance max"
		particleslib::CPerParticleFloatInput m_fRadiusMax; // 0x328		
		// MPropertyFriendlyName "distance bias"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecDistanceBias; // 0x488		
		// MPropertyFriendlyName "distance bias absolute value"
		// MVectorIsCoordinate
		Vector m_vecDistanceBiasAbs; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
	public:
		// MPropertyFriendlyName "input position transform"
		particleslib::CParticleTransformInput m_TransformInput; // 0xb10		
		// MPropertyFriendlyName "speed min"
		particleslib::CPerParticleFloatInput m_fSpeedMin; // 0xb78		
		// MPropertyFriendlyName "speed max"
		particleslib::CPerParticleFloatInput m_fSpeedMax; // 0xcd8		
		// MPropertyFriendlyName "speed random exponent"
		float m_fSpeedRandExp; // 0xe38		
		// MPropertyFriendlyName "bias in local system"
		bool m_bLocalCoords; // 0xe3c		
	private:
		[[maybe_unused]] uint8_t __pad0e3d[0x3]; // 0xe3d
	public:
		// MPropertyFriendlyName "randomly distribution growth time"
		float m_flEndCPGrowthTime; // 0xe40		
	private:
		[[maybe_unused]] uint8_t __pad0e44[0x4]; // 0xe44
	public:
		// MPropertyFriendlyName "speed in local coordinate system min"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xe48		
		// MPropertyFriendlyName "speed in local coordinate system max"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x14c0		
		// MPropertyFriendlyName "Output vector"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b38		
		// MPropertyFriendlyName "Velocity vector"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldVelocity; // 0x1b3c		
	};
};
