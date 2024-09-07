#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleModelInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x12e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateOnModel : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "input model"
		particleslib::CParticleModelInput m_modelInput; // 0x1c8		
		// MPropertyFriendlyName "input transform for transforming local space bias vector"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_transformInput; // 0x228		
		// MPropertyFriendlyName "force to be inside model"
		int32_t m_nForceInModel; // 0x290		
		// MPropertyFriendlyName "bias box distribution by volume"
		bool m_bScaleToVolume; // 0x294		
		// MPropertyFriendlyName "even distribution within boxes"
		bool m_bEvenDistribution; // 0x295		
	private:
		[[maybe_unused]] uint8_t __pad0296[0x2]; // 0x296
	public:
		// MPropertyFriendlyName "desired hitbox"
		particleslib::CParticleCollectionFloatInput m_nDesiredHitbox; // 0x298		
		// MPropertyFriendlyName "Control Point Providing Hitbox index"
		int32_t m_nHitboxValueFromControlPointIndex; // 0x3f8		
	private:
		[[maybe_unused]] uint8_t __pad03fc[0x4]; // 0x3fc
	public:
		// MPropertyFriendlyName "hitbox scale"
		particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x400		
		// MPropertyFriendlyName "inherited velocity scale"
		float m_flBoneVelocity; // 0xa78		
		// MPropertyFriendlyName "maximum inherited velocity"
		float m_flMaxBoneVelocity; // 0xa7c		
		// MPropertyFriendlyName "direction bias"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0xa80		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x10f8		
		// MPropertyFriendlyName "bias in local space"
		bool m_bLocalCoords; // 0x1178		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x1179		
		// MPropertyFriendlyName "Use renderable meshes instead of hitboxes"
		bool m_bUseMesh; // 0x117a		
	private:
		[[maybe_unused]] uint8_t __pad117b[0x5]; // 0x117b
	public:
		// MPropertyFriendlyName "hitbox shell thickness"
		particleslib::CParticleCollectionFloatInput m_flShellSize; // 0x1180		
	};
};
