#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
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
	// Size: 0x9a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointRotation : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "rotation axis"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x1c8		
		// MPropertyFriendlyName "rotation rate"
		particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x840		
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x9a0		
		// MPropertyFriendlyName "local space control point"
		int32_t m_nLocalCP; // 0x9a4		
	};
};
