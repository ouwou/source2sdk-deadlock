#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
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
	// Size: 0x9b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_VectorFieldSnapshot : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "extra velocity field to write"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c4		
		// MPropertyFriendlyName "local space control point number"
		int32_t m_nLocalSpaceCP; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1d0		
		// MPropertyFriendlyName "Component Scale"
		particleslib::CPerParticleVecInput m_vecScale; // 0x330		
		// MPropertyFriendlyName "Boundary Dampening"
		float m_flBoundaryDampening; // 0x9a8		
		// MPropertyFriendlyName "Set Velocity"
		bool m_bSetVelocity; // 0x9ac		
		// MPropertyFriendlyName "Lock to Surface"
		bool m_bLockToSurface; // 0x9ad		
	private:
		[[maybe_unused]] uint8_t __pad09ae[0x2]; // 0x9ae
	public:
		// MPropertyFriendlyName "Vector Field Grid Spacing Override"
		float m_flGridSpacing; // 0x9b0		
	};
};
