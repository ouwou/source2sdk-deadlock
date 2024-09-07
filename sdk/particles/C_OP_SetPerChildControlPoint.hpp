#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	class C_OP_SetPerChildControlPoint : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c0		
		// MPropertyFriendlyName "control point to set"
		int32_t m_nFirstControlPoint; // 0x1c4		
		// MPropertyFriendlyName "# of children to set"
		int32_t m_nNumControlPoints; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "particle increment amount"
		particleslib::CParticleCollectionFloatInput m_nParticleIncrement; // 0x1d0		
		// MPropertyFriendlyName "first particle to copy"
		particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x330		
		// MPropertyFriendlyName "set orientation from velocity"
		bool m_bSetOrientation; // 0x490		
	private:
		[[maybe_unused]] uint8_t __pad0491[0x3]; // 0x491
	public:
		// MPropertyFriendlyName "orientation vector"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nOrientationField; // 0x494		
		// MPropertyFriendlyName "set number of children based on particle count"
		bool m_bNumBasedOnParticleCount; // 0x498		
	};
};
