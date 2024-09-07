#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_LocalAccelerationForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "local space control point"
		int32_t m_nCP; // 0x1d0		
		// MPropertyFriendlyName "scale control point"
		int32_t m_nScaleCP; // 0x1d4		
		// MPropertyFriendlyName "local space acceleration"
		particleslib::CParticleCollectionVecInput m_vecAccel; // 0x1d8		
	};
};
