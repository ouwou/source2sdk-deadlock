#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleHitboxBiasType_t.hpp"
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
	// Size: 0x1370
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateOnModelAtHeight : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x1c8		
		// MPropertyFriendlyName "force creation height to desired height"
		bool m_bForceZ; // 0x1c9		
	private:
		[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1cc		
		// MPropertyFriendlyName "height override control point number"
		int32_t m_nHeightCP; // 0x1d0		
		// MPropertyFriendlyName "desired height is relative to water"
		bool m_bUseWaterHeight; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
	public:
		// MPropertyFriendlyName "relative desired height"
		particleslib::CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d8		
		// MPropertyFriendlyName "model hitbox scale"
		particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x338		
		// MPropertyFriendlyName "direction bias"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0x9b0		
		// MPropertyFriendlyName "bias type"
		particles::ParticleHitboxBiasType_t m_nBiasType; // 0x1028		
		// MPropertyFriendlyName "bias in local space"
		bool m_bLocalCoords; // 0x102c		
		// MPropertyFriendlyName "bias prefers moving hitboxes"
		bool m_bPreferMovingBoxes; // 0x102d		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x102e		
	private:
		[[maybe_unused]] uint8_t __pad10ae[0x2]; // 0x10ae
	public:
		// MPropertyFriendlyName "hitbox velocity inherited scale"
		particleslib::CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x10b0		
		// MPropertyFriendlyName "max hitbox velocity"
		particleslib::CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1210		
	};
};
