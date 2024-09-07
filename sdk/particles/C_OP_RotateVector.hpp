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
	// Size: 0x348
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RotateVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "rotation axis min"
		// MVectorIsCoordinate
		Vector m_vecRotAxisMin; // 0x1c4		
		// MPropertyFriendlyName "rotation axis max"
		// MVectorIsCoordinate
		Vector m_vecRotAxisMax; // 0x1d0		
		// MPropertyFriendlyName "rotation rate min"
		float m_flRotRateMin; // 0x1dc		
		// MPropertyFriendlyName "rotation rate max"
		float m_flRotRateMax; // 0x1e0		
		// MPropertyFriendlyName "normalize output"
		bool m_bNormalize; // 0x1e4		
	private:
		[[maybe_unused]] uint8_t __pad01e5[0x3]; // 0x1e5
	public:
		// MPropertyFriendlyName "per particle scale"
		particleslib::CPerParticleFloatInput m_flScale; // 0x1e8		
	};
};
