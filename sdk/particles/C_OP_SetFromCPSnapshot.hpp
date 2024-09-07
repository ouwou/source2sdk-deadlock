#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetFromCPSnapshot : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "field to read"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4		
		// MPropertyFriendlyName "field to write"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8		
		// MPropertyFriendlyName "local space control point number"
		int32_t m_nLocalSpaceCP; // 0x1cc		
		// MPropertyFriendlyName "random order"
		bool m_bRandom; // 0x1d0		
		// MPropertyFriendlyName "reverse order"
		bool m_bReverse; // 0x1d1		
	private:
		[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
	public:
		// MPropertyFriendlyName "random seed"
		int32_t m_nRandomSeed; // 0x1d4		
		// MPropertyFriendlyName "Snapshot start point"
		particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1d8		
		// MPropertyFriendlyName "Snapshot increment amount"
		particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x338		
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x498		
		// MPropertyFriendlyName "Sub-Sample Between Input Points"
		bool m_bSubSample; // 0x5f8		
		// MPropertyFriendlyName "Position also sets Previous Position"
		bool m_bPrev; // 0x5f9		
	};
};
