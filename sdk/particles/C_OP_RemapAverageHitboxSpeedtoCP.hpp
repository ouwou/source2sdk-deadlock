#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleHitboxDataSelection_t.hpp"
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
	// Size: 0xe58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapAverageHitboxSpeedtoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "input control point"
		int32_t m_nInControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1cc		
		// MPropertyFriendlyName "Output component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nField; // 0x1d0		
		// MPropertyFriendlyName "hitbox data"
		particles::ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1d4		
		// MPropertyFriendlyName "input minimum"
		particleslib::CParticleCollectionFloatInput m_flInputMin; // 0x1d8		
		// MPropertyFriendlyName "input maximum"
		particleslib::CParticleCollectionFloatInput m_flInputMax; // 0x338		
		// MPropertyFriendlyName "output minimum"
		particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x498		
		// MPropertyFriendlyName "output maximum"
		particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5f8		
		// MPropertyFriendlyName "intersection height CP"
		// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
		int32_t m_nHeightControlPointNumber; // 0x758		
	private:
		[[maybe_unused]] uint8_t __pad075c[0x4]; // 0x75c
	public:
		// MPropertyFriendlyName "comparison velocity"
		// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
		particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x760		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0xdd8		
	};
};
