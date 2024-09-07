#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/CParticleMassCalculationParameters.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xdc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_BasicMovement : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "gravity"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_Gravity; // 0x1c0		
		// MPropertyFriendlyName "drag"
		// MPropertyAttributeRange "-1 1"
		particleslib::CParticleCollectionFloatInput m_fDrag; // 0x838		
		// MPropertyFriendlyName "Mass controls"
		particles::CParticleMassCalculationParameters m_massControls; // 0x998		
		// MPropertyFriendlyName "max constraint passes"
		int32_t m_nMaxConstraintPasses; // 0xdc0		
		// MPropertyFriendlyName "use new code"
		bool m_bUseNewCode; // 0xdc4		
	};
};
