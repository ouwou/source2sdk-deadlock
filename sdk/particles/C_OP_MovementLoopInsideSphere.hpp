#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
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
	class C_OP_MovementLoopInsideSphere : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "distance maximum"
		particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1c8		
		// MPropertyFriendlyName "component scale"
		particleslib::CParticleCollectionVecInput m_vecScale; // 0x328		
		// MPropertyFriendlyName "distance squared output attribute"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nDistSqrAttr; // 0x9a0		
	};
};
