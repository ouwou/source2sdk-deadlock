#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointToCPVelocity : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point input"
		int32_t m_nCPInput; // 0x1c8		
		// MPropertyFriendlyName "control point number to set velocity"
		int32_t m_nCPOutputVel; // 0x1cc		
		// MPropertyFriendlyName "normalize output"
		bool m_bNormalize; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "control point number to set magnitude"
		int32_t m_nCPOutputMag; // 0x1d4		
		// MPropertyFriendlyName "control point field for magnitude"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nCPField; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
	public:
		// MPropertyFriendlyName "comparison velocity"
		particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1e0		
	};
};
