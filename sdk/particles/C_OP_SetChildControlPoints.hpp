#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	class C_OP_SetChildControlPoints : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c0		
		// MPropertyFriendlyName "first control point to set"
		int32_t m_nFirstControlPoint; // 0x1c4		
		// MPropertyFriendlyName "# of control points to set"
		int32_t m_nNumControlPoints; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "first particle to copy"
		particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1d0		
		// MPropertyFriendlyName "start as last particle"
		bool m_bReverse; // 0x330		
		// MPropertyFriendlyName "set orientation"
		bool m_bSetOrientation; // 0x331		
	};
};
