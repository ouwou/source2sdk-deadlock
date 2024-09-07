#pragma once
#include "particles/CBaseTrailRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x3d68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderTrails : public particles::CBaseTrailRenderer
	{
	public:
		// MPropertyStartGroup "Screenspace Fading and culling"
		// MPropertyFriendlyName "enable fading and clamping"
		// MPropertySortPriority "1000"
		bool m_bEnableFadingAndClamping; // 0x2ac0		
	private:
		[[maybe_unused]] uint8_t __pad2ac1[0x3]; // 0x2ac1
	public:
		// MPropertyFriendlyName "start fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flStartFadeDot; // 0x2ac4		
		// MPropertyFriendlyName "end fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flEndFadeDot; // 0x2ac8		
		// MPropertyStartGroup "+Trail Length"
		// MPropertyFriendlyName "Anchor point source"
		// MPropertyAttributeChoiceName "particlefield_vector"
		// MPropertySortPriority "800"
		particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x2acc		
		// MPropertyFriendlyName "max length"
		// MPropertySortPriority "800"
		float m_flMaxLength; // 0x2ad0		
		// MPropertyFriendlyName "min length"
		// MPropertySortPriority "800"
		float m_flMinLength; // 0x2ad4		
		// MPropertyFriendlyName "ignore delta time"
		// MPropertySortPriority "800"
		bool m_bIgnoreDT; // 0x2ad8		
	private:
		[[maybe_unused]] uint8_t __pad2ad9[0x3]; // 0x2ad9
	public:
		// MPropertyFriendlyName "constrain radius to no more than this times the length"
		// MPropertySortPriority "800"
		float m_flConstrainRadiusToLengthRatio; // 0x2adc		
		// MPropertyFriendlyName "amount to scale trail length by"
		float m_flLengthScale; // 0x2ae0		
		// MPropertyFriendlyName "how long before a trail grows to its full length"
		float m_flLengthFadeInTime; // 0x2ae4		
		// MPropertyStartGroup "Trail Head & Tail"
		// MPropertyFriendlyName "head taper scale"
		// MPropertySortPriority "800"
		particleslib::CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2ae8		
		// MPropertyFriendlyName "head color scale"
		particleslib::CParticleCollectionVecInput m_vecHeadColorScale; // 0x2c48		
		// MPropertyFriendlyName "head alpha scale"
		particleslib::CPerParticleFloatInput m_flHeadAlphaScale; // 0x32c0		
		// MPropertyFriendlyName "tail taper scale"
		particleslib::CPerParticleFloatInput m_flRadiusTaper; // 0x3420		
		// MPropertyFriendlyName "tail color scale"
		particleslib::CParticleCollectionVecInput m_vecTailColorScale; // 0x3580		
		// MPropertyFriendlyName "tail alpha scale"
		particleslib::CPerParticleFloatInput m_flTailAlphaScale; // 0x3bf8		
		// MPropertyStartGroup "Trail UV Controls"
		// MPropertyFriendlyName "texture UV horizontal Scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "800"
		particles::ParticleAttributeIndex_t m_nHorizCropField; // 0x3d58		
		// MPropertyFriendlyName "texture UV vertical Scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nVertCropField; // 0x3d5c		
		// MPropertyFriendlyName "Trail forward shift (fraction)"
		float m_flForwardShift; // 0x3d60		
		// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
		bool m_bFlipUVBasedOnPitchYaw; // 0x3d64		
	};
};
