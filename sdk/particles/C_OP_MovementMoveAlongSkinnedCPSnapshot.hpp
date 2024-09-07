#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x490
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MovementMoveAlongSkinnedCPSnapshot : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nSnapshotControlPointNumber; // 0x1c4		
		// MPropertyFriendlyName "set normal"
		bool m_bSetNormal; // 0x1c8		
		// MPropertyFriendlyName "set radius"
		bool m_bSetRadius; // 0x1c9		
	private:
		[[maybe_unused]] uint8_t __pad01ca[0x6]; // 0x1ca
	public:
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1d0		
		// MPropertyFriendlyName "Snapshot Index T Value"
		particleslib::CPerParticleFloatInput m_flTValue; // 0x330		
	};
};
