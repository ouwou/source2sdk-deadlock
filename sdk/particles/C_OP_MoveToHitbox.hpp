#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/HitboxLerpType_t.hpp"
#include "particleslib/CParticleModelInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x480
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MoveToHitbox : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "model input"
		particleslib::CParticleModelInput m_modelInput; // 0x1c0		
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_transformInput; // 0x220		
	private:
		[[maybe_unused]] uint8_t __pad0288[0x4]; // 0x288
	public:
		// MPropertyFriendlyName "lifetime lerp start"
		float m_flLifeTimeLerpStart; // 0x28c		
		// MPropertyFriendlyName "lifetime lerp end"
		float m_flLifeTimeLerpEnd; // 0x290		
		// MPropertyFriendlyName "previous position scale"
		float m_flPrevPosScale; // 0x294		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x298		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x318		
	private:
		[[maybe_unused]] uint8_t __pad0319[0x3]; // 0x319
	public:
		// MPropertyFriendlyName "lerp type"
		particles::HitboxLerpType_t m_nLerpType; // 0x31c		
		// MPropertyFriendlyName "Constant Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0x320		
	};
};
