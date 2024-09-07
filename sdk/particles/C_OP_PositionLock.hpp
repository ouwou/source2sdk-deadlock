#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	// Size: 0xa38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PositionLock : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c0		
		// MPropertyFriendlyName "start fadeout min"
		float m_flStartTime_min; // 0x228		
		// MPropertyFriendlyName "start fadeout max"
		float m_flStartTime_max; // 0x22c		
		// MPropertyFriendlyName "start fadeout exponent"
		float m_flStartTime_exp; // 0x230		
		// MPropertyFriendlyName "end fadeout min"
		float m_flEndTime_min; // 0x234		
		// MPropertyFriendlyName "end fadeout max"
		float m_flEndTime_max; // 0x238		
		// MPropertyFriendlyName "end fadeout exponent"
		float m_flEndTime_exp; // 0x23c		
		// MPropertyFriendlyName "distance fade range"
		float m_flRange; // 0x240		
	private:
		[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
	public:
		// MPropertyFriendlyName "distance fade bias"
		particleslib::CParticleCollectionFloatInput m_flRangeBias; // 0x248		
		// MPropertyFriendlyName "instant jump threshold"
		float m_flJumpThreshold; // 0x3a8		
		// MPropertyFriendlyName "previous position scale"
		float m_flPrevPosScale; // 0x3ac		
		// MPropertyFriendlyName "lock rotation"
		bool m_bLockRot; // 0x3b0		
	private:
		[[maybe_unused]] uint8_t __pad03b1[0x7]; // 0x3b1
	public:
		// MPropertyFriendlyName "component scale"
		particleslib::CParticleCollectionVecInput m_vecScale; // 0x3b8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0xa30		
		// MPropertyFriendlyName "output field prev"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa34		
	};
};
