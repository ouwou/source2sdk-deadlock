#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	class C_OP_SetControlPointToWaterSurface : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "source CP"
		int32_t m_nSourceCP; // 0x1c8		
		// MPropertyFriendlyName "CP to set to surface"
		int32_t m_nDestCP; // 0x1cc		
		// MPropertyFriendlyName "CP to set to surface current flow velocity"
		// MPropertySuppressExpr "mod != hlx"
		int32_t m_nFlowCP; // 0x1d0		
		// MPropertyFriendlyName "CP to set component of if water"
		int32_t m_nActiveCP; // 0x1d4		
		// MPropertyFriendlyName "CP component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nActiveCPField; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
	public:
		// MPropertyFriendlyName "retest rate"
		particleslib::CParticleCollectionFloatInput m_flRetestRate; // 0x1e0		
		// MPropertyFriendlyName "adaptive retest on moving surface"
		bool m_bAdaptiveThreshold; // 0x340		
	};
};
