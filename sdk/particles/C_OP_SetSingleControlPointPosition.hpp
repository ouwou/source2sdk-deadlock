#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x8b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetSingleControlPointPosition : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "only set position once"
		bool m_bSetOnce; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nCP1; // 0x1cc		
		// MPropertyFriendlyName "control point location"
		particleslib::CParticleCollectionVecInput m_vecCP1Pos; // 0x1d0		
		// MPropertyFriendlyName "transform to offset positions from"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_transformInput; // 0x848		
	};
};
