#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/ParticleLightUnitChoiceList_t.hpp"
#include "particles/ParticleOmni2LightTypeChoiceList_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x13b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderOmni2Light : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "Type"
		particles::ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
	public:
		// MPropertyFriendlyName "Color Blend"
		particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x218		
		// MPropertyFriendlyName "Color Blend Type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0x890		
		particles::ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x894		
		// MPropertyFriendlyName "Lumens"
		// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
		particleslib::CPerParticleFloatInput m_flBrightnessLumens; // 0x898		
		// MPropertyFriendlyName "Candelas"
		// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
		particleslib::CPerParticleFloatInput m_flBrightnessCandelas; // 0x9f8		
		// MPropertyFriendlyName "Shadows"
		// MPropertySuppressExpr "mod == csgo"
		bool m_bCastShadows; // 0xb58		
		// MPropertyFriendlyName "Fog"
		bool m_bFog; // 0xb59		
	private:
		[[maybe_unused]] uint8_t __pad0b5a[0x6]; // 0xb5a
	public:
		// MPropertyFriendlyName "Fog Scale"
		// MPropertySuppressExpr "!m_bFog"
		particleslib::CPerParticleFloatInput m_flFogScale; // 0xb60		
		// MPropertyFriendlyName "Light Radius"
		particleslib::CPerParticleFloatInput m_flLuminaireRadius; // 0xcc0		
		// MPropertyFriendlyName "Skirt"
		particleslib::CPerParticleFloatInput m_flSkirt; // 0xe20		
		// MPropertyFriendlyName "Range"
		particleslib::CPerParticleFloatInput m_flRange; // 0xf80		
		// MPropertyFriendlyName "Inner Cone Angle"
		particleslib::CPerParticleFloatInput m_flInnerConeAngle; // 0x10e0		
		// MPropertyFriendlyName "Outer Cone Angle"
		particleslib::CPerParticleFloatInput m_flOuterConeAngle; // 0x1240		
		// MPropertyFriendlyName "Cookie"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie; // 0x13a0		
		// MPropertyFriendlyName "Cookie is Spherically Mapped"
		bool m_bSphericalCookie; // 0x13a8		
	};
};
