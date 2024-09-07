#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/ParticleLightBehaviorChoiceList_t.hpp"
#include "particles/ParticleLightFogLightingMode_t.hpp"
#include "particles/ParticleLightTypeChoiceList_t.hpp"
#include "particles/StandardLightingAttenuationStyle_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x13f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderStandardLight : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "light type"
		particles::ParticleLightTypeChoiceList_t m_nLightType; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
	public:
		// MPropertyFriendlyName "color blend"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x218		
		// MPropertyFriendlyName "color blend type"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0x890		
	private:
		[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
	public:
		// MPropertyFriendlyName "intensity"
		particleslib::CParticleCollectionFloatInput m_flIntensity; // 0x898		
		// MPropertyFriendlyName "cast shadows"
		// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
		bool m_bCastShadows; // 0x9f8		
	private:
		[[maybe_unused]] uint8_t __pad09f9[0x7]; // 0x9f9
	public:
		// MPropertyFriendlyName "inner cone angle"
		// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
		particleslib::CParticleCollectionFloatInput m_flTheta; // 0xa00		
		// MPropertyFriendlyName "outer cone angle"
		// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
		particleslib::CParticleCollectionFloatInput m_flPhi; // 0xb60		
		// MPropertyFriendlyName "light radius multiplier"
		particleslib::CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xcc0		
		// MPropertyFriendlyName "attenuation type"
		particles::StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xe20		
	private:
		[[maybe_unused]] uint8_t __pad0e24[0x4]; // 0xe24
	public:
		// MPropertyFriendlyName "falloff linearity"
		// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
		particleslib::CParticleCollectionFloatInput m_flFalloffLinearity; // 0xe28		
		// MPropertyFriendlyName "falloff fifty percent"
		// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
		particleslib::CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xf88		
		// MPropertyFriendlyName "falloff zero percent"
		// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
		particleslib::CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x10e8		
		// MPropertyFriendlyName "render diffuse"
		// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
		bool m_bRenderDiffuse; // 0x1248		
		// MPropertyFriendlyName "render specular"
		// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
		bool m_bRenderSpecular; // 0x1249		
	private:
		[[maybe_unused]] uint8_t __pad124a[0x6]; // 0x124a
	public:
		// MPropertyFriendlyName "light cookie string"
		CUtlString m_lightCookie; // 0x1250		
		// MPropertyFriendlyName "light priority"
		int32_t m_nPriority; // 0x1258		
		// MPropertyFriendlyName "fog lighting mode"
		// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
		particles::ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x125c		
		// MPropertyFriendlyName "fog contribution"
		// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
		particleslib::CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1260		
		// MPropertyFriendlyName "capsule behavior"
		particles::ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x13c0		
		// MPropertyStartGroup "Capsule Light Controls"
		// MPropertyFriendlyName "capsule length"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
		float m_flCapsuleLength; // 0x13c4		
		// MPropertyFriendlyName "reverse point order"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
		bool m_bReverseOrder; // 0x13c8		
		// MPropertyFriendlyName "Closed loop"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
		bool m_bClosedLoop; // 0x13c9		
	private:
		[[maybe_unused]] uint8_t __pad13ca[0x2]; // 0x13ca
	public:
		// MPropertyFriendlyName "Anchor point source"
		// MPropertyAttributeChoiceName "particlefield_vector"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x13cc		
		// MPropertyFriendlyName "max length"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		float m_flMaxLength; // 0x13d0		
		// MPropertyFriendlyName "min length"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		float m_flMinLength; // 0x13d4		
		// MPropertyFriendlyName "ignore delta time"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		bool m_bIgnoreDT; // 0x13d8		
	private:
		[[maybe_unused]] uint8_t __pad13d9[0x3]; // 0x13d9
	public:
		// MPropertyFriendlyName "constrain radius to no more than this times the length"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		float m_flConstrainRadiusToLengthRatio; // 0x13dc		
		// MPropertyFriendlyName "amount to scale trail length by"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		float m_flLengthScale; // 0x13e0		
		// MPropertyFriendlyName "how long before a trail grows to its full length"
		// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
		float m_flLengthFadeInTime; // 0x13e4		
	};
};
