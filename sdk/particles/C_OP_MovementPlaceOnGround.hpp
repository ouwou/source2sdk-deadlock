#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleTraceMissBehavior_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x3e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MovementPlaceOnGround : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "offset"
		particleslib::CPerParticleFloatInput m_flOffset; // 0x1c0		
		// MPropertyFriendlyName "max trace length"
		float m_flMaxTraceLength; // 0x320		
		// MPropertyFriendlyName "CP movement tolerance"
		float m_flTolerance; // 0x324		
		// MPropertyFriendlyName "trace offset"
		float m_flTraceOffset; // 0x328		
		// MPropertyFriendlyName "interpolation rate"
		float m_flLerpRate; // 0x32c		
		// MPropertyFriendlyName "collision group"
		char m_CollisionGroupName[128]; // 0x330		
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x3b0		
		// MPropertyFriendlyName "reference CP 1"
		int32_t m_nRefCP1; // 0x3b4		
		// MPropertyFriendlyName "reference CP 2"
		int32_t m_nRefCP2; // 0x3b8		
		// MPropertyFriendlyName "interploation distance tolerance cp"
		int32_t m_nLerpCP; // 0x3bc		
	private:
		[[maybe_unused]] uint8_t __pad03c0[0x8]; // 0x3c0
	public:
		// MPropertyFriendlyName "No Collision Behavior"
		particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3c8		
		// MPropertyFriendlyName "include default contents trace hulls"
		bool m_bIncludeShotHull; // 0x3cc		
		// MPropertyFriendlyName "include water"
		bool m_bIncludeWater; // 0x3cd		
	private:
		[[maybe_unused]] uint8_t __pad03ce[0x2]; // 0x3ce
	public:
		// MPropertyFriendlyName "set normal"
		bool m_bSetNormal; // 0x3d0		
		// MPropertyFriendlyName "treat offset as scalar of particle radius"
		bool m_bScaleOffset; // 0x3d1		
	private:
		[[maybe_unused]] uint8_t __pad03d2[0x2]; // 0x3d2
	public:
		// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
		int32_t m_nPreserveOffsetCP; // 0x3d4		
		// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
		int32_t m_nIgnoreCP; // 0x3d8		
	};
};
