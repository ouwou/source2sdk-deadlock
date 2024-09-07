#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x8c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderDeferredLight : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "projected texture use alpha test window"
		// MPropertySuppressExpr "!m_bUseTexture"
		bool m_bUseAlphaTestWindow; // 0x210		
		// MPropertyFriendlyName "projected texture light"
		bool m_bUseTexture; // 0x211		
	private:
		[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
	public:
		// MPropertyStartGroup "+Renderer Modifiers"
		// MPropertyFriendlyName "radius scale"
		// MPropertySortPriority "700"
		float m_flRadiusScale; // 0x214		
		// MPropertyFriendlyName "alpha scale"
		// MPropertySortPriority "700"
		float m_flAlphaScale; // 0x218		
		// MPropertyFriendlyName "per-particle alpha scale attribute"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "700"
		particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x21c		
		// MPropertyFriendlyName "color blend"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x220		
		// MPropertyFriendlyName "color blend type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0x898		
		// MPropertyStartGroup
		// MPropertyFriendlyName "spotlight distance"
		float m_flLightDistance; // 0x89c		
		// MPropertyFriendlyName "light start falloff"
		float m_flStartFalloff; // 0x8a0		
		// MPropertyFriendlyName "spotlight distance falloff"
		float m_flDistanceFalloff; // 0x8a4		
		// MPropertyFriendlyName "spotlight FoV"
		float m_flSpotFoV; // 0x8a8		
		// MPropertyFriendlyName "projected texture alpha test point scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySuppressExpr "!m_bUseTexture"
		particles::ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x8ac		
		// MPropertyFriendlyName "projected texture alpha test range scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySuppressExpr "!m_bUseTexture"
		particles::ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x8b0		
		// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySuppressExpr "!m_bUseTexture"
		particles::ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x8b4		
		// MPropertyFriendlyName "texture"
		// MPropertySuppressExpr "!m_bUseTexture"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTexture; // 0x8b8		
		// MPropertyFriendlyName "HSV Shift Control Point"
		int32_t m_nHSVShiftControlPoint; // 0x8c0		
	};
};
