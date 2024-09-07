#pragma once
#include "particles/AnimationType_t.hpp"
#include "particles/BlurFilterType_t.hpp"
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAlphaReferenceType_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/ParticleDepthFeatheringMode_t.hpp"
#include "particles/ParticleFogType_t.hpp"
#include "particles/ParticleOutputBlendMode_t.hpp"
#include "particles/ParticleSequenceCropOverride_t.hpp"
#include "particles/ParticleSortingChoiceList_t.hpp"
#include "particles/SpriteCardPerParticleScale_t.hpp"
#include "particles/SpriteCardShaderType_t.hpp"
#include "particles/TextureGroup_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "particleslib/CParticleCollectionRendererVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x27e8
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CBaseRendererSource2 : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyStartGroup "+Renderer Modifiers"
		// MPropertyFriendlyName "radius scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x210		
		// MPropertyFriendlyName "alpha scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x370		
		// MPropertyFriendlyName "rotation roll scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionRendererFloatInput m_flRollScale; // 0x4d0		
		// MPropertyFriendlyName "per-particle alpha scale attribute"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "700"
		particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x630		
	private:
		[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
	public:
		// MPropertyFriendlyName "color blend"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionRendererVecInput m_vecColorScale; // 0x638		
		// MPropertyFriendlyName "color blend type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0xcb0		
		// MPropertyStartGroup "+Material"
		// MPropertyFriendlyName "Shader"
		// MPropertySortPriority "600"
		particles::SpriteCardShaderType_t m_nShaderType; // 0xcb4		
		// MPropertyFriendlyName "Custom Shader"
		// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
		// MPropertySortPriority "600"
		CUtlString m_strShaderOverride; // 0xcb8		
		// MPropertyFriendlyName "X offset of center point"
		// MPropertySortPriority "600"
		particleslib::CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xcc0		
		// MPropertyFriendlyName "Y offset of center point"
		// MPropertySortPriority "600"
		particleslib::CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xe20		
		// MPropertyFriendlyName "Bump Strength"
		// MPropertySortPriority "600"
		float m_flBumpStrength; // 0xf80		
		// MPropertyFriendlyName "Sheet Crop Behavior"
		// MPropertySortPriority "600"
		particles::ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xf84		
		// MPropertyFriendlyName "Textures"
		// MParticleRequireDefaultArrayEntry
		// MPropertyAutoExpandSelf
		// MPropertySortPriority "600"
		CUtlVector<particles::TextureGroup_t> m_vecTexturesInput; // 0xf88		
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "animation rate"
		// MPropertyAttributeRange "0 5"
		// MPropertySortPriority "500"
		float m_flAnimationRate; // 0xfa0		
		// MPropertyFriendlyName "animation type"
		// MPropertySortPriority "500"
		particles::AnimationType_t m_nAnimationType; // 0xfa4		
		// MPropertyFriendlyName "set animation value in FPS"
		// MPropertySortPriority "500"
		bool m_bAnimateInFPS; // 0xfa8		
	private:
		[[maybe_unused]] uint8_t __pad0fa9[0x7]; // 0xfa9
	public:
		// MPropertyStartGroup "Lighting and Shadows"
		// MPropertyFriendlyName "self illum amount"
		// MPropertyAttributeRange "0 2"
		// MPropertySortPriority "400"
		particleslib::CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xfb0		
		// MPropertyFriendlyName "diffuse lighting amount"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "400"
		particleslib::CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x1110		
		// MPropertyFriendlyName "diffuse max contribution clamp"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "mod != hlx"
		particleslib::CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1270		
		// MPropertyFriendlyName "diffuse lighting origin Control Point"
		// MPropertySortPriority "400"
		int32_t m_nLightingControlPoint; // 0x13d0		
		// MPropertyFriendlyName "self illum per-particle"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "m_nOrientationType == PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL || m_nOrientationType == PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		particles::ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x13d4		
		// MPropertyStartGroup "+Color and alpha adjustments"
		// MPropertyFriendlyName "output blend mode"
		// MPropertySortPriority "300"
		particles::ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x13d8		
		// MPropertyFriendlyName "Gamma-correct vertex colors"
		// MPropertySortPriority "300"
		bool m_bGammaCorrectVertexColors; // 0x13dc		
		// MPropertyFriendlyName "Saturate color pre alphablend"
		// MPropertySortPriority "300"
		// MPropertySuppressExpr "mod!=dota"
		bool m_bSaturateColorPreAlphaBlend; // 0x13dd		
	private:
		[[maybe_unused]] uint8_t __pad13de[0x2]; // 0x13de
	public:
		// MPropertyFriendlyName "add self amount over alphablend"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x13e0		
		// MPropertyFriendlyName "desaturation amount"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flDesaturation; // 0x1540		
		// MPropertyFriendlyName "overbright factor"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x16a0		
		// MPropertyFriendlyName "HSV Shift Control Point"
		// MPropertySortPriority "300"
		int32_t m_nHSVShiftControlPoint; // 0x1800		
		// MPropertyFriendlyName "Apply fog to particle"
		// MPropertySortPriority "300"
		particles::ParticleFogType_t m_nFogType; // 0x1804		
		// MPropertyFriendlyName "Fog Scale"
		// MPropertySortPriority "300"
		// MPropertySuppressExpr "mod != hlx"
		particleslib::CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1808		
		// MPropertyFriendlyName "Apply fog of war to color"
		// MPropertySortPriority "300"
		// MPropertySuppressExpr "mod != dota"
		bool m_bTintByFOW; // 0x1968		
		// MPropertyFriendlyName "Apply global light to color"
		// MPropertySortPriority "300"
		// MPropertySuppressExpr "mod != dota"
		bool m_bTintByGlobalLight; // 0x1969		
	private:
		[[maybe_unused]] uint8_t __pad196a[0x2]; // 0x196a
	public:
		// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
		// MPropertyFriendlyName "alpha reference"
		// MPropertySortPriority "300"
		particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x196c		
		// MPropertyFriendlyName "alpha reference window size"
		// MPropertySortPriority "300"
		particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1970		
		// MPropertyFriendlyName "alpha reference type"
		// MPropertySortPriority "300"
		particles::ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1974		
		// MPropertyFriendlyName "alpha reference softness"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x1978		
		// MPropertyFriendlyName "source alpha value to map to alpha of zero"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1ad8		
		// MPropertyFriendlyName "source alpha value to map to alpha of 1"
		// MPropertyAttributeRange "0 1"
		// MPropertySortPriority "300"
		particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1c38		
		// MPropertyStartGroup "Refraction"
		// MPropertyFriendlyName "refract background"
		// MPropertySortPriority "200"
		bool m_bRefract; // 0x1d98		
		// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
		// MPropertySortPriority "200"
		// MPropertySuppressExpr "!m_bRefract"
		bool m_bRefractSolid; // 0x1d99		
	private:
		[[maybe_unused]] uint8_t __pad1d9a[0x6]; // 0x1d9a
	public:
		// MPropertyFriendlyName "refract amount"
		// MPropertyAttributeRange "-2 2"
		// MPropertySortPriority "200"
		// MPropertySuppressExpr "!m_bRefract"
		particleslib::CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1da0		
		// MPropertyFriendlyName "refract blur radius"
		// MPropertySortPriority "200"
		// MPropertySuppressExpr "!m_bRefract"
		int32_t m_nRefractBlurRadius; // 0x1f00		
		// MPropertyFriendlyName "refract blur type"
		// MPropertySortPriority "200"
		// MPropertySuppressExpr "!m_bRefract"
		particles::BlurFilterType_t m_nRefractBlurType; // 0x1f04		
		// MPropertyStartGroup
		// MPropertyFriendlyName "Only Render in effects bloom pass"
		// MPropertySortPriority "1100"
		bool m_bOnlyRenderInEffectsBloomPass; // 0x1f08		
		// MPropertyFriendlyName "Only Render in effects water pass"
		// MPropertySortPriority "1050"
		// MPropertySuppressExpr "mod != csgo"
		bool m_bOnlyRenderInEffectsWaterPass; // 0x1f09		
		// MPropertyFriendlyName "Use Mixed Resolution Rendering"
		// MPropertySortPriority "1200"
		bool m_bUseMixedResolutionRendering; // 0x1f0a		
		// MPropertyFriendlyName "Only Render in effects game overlay pass"
		// MPropertySortPriority "1210"
		// MPropertySuppressExpr "mod != csgo"
		bool m_bOnlyRenderInEffecsGameOverlay; // 0x1f0b		
		// MPropertyStartGroup "Stencil"
		// MPropertyFriendlyName "stencil test ID"
		// MPropertySortPriority "0"
		char m_stencilTestID[128]; // 0x1f0c		
		// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
		// MPropertySortPriority "0"
		bool m_bStencilTestExclude; // 0x1f8c		
		// MPropertyFriendlyName "stencil write ID"
		// MPropertySortPriority "0"
		char m_stencilWriteID[128]; // 0x1f8d		
		// MPropertyFriendlyName "write stencil on z-buffer test success"
		// MPropertySortPriority "0"
		bool m_bWriteStencilOnDepthPass; // 0x200d		
		// MPropertyFriendlyName "write stencil on z-buffer test failure"
		// MPropertySortPriority "0"
		bool m_bWriteStencilOnDepthFail; // 0x200e		
		// MPropertyStartGroup "Depth buffer control and effects"
		// MPropertyFriendlyName "reverse z-buffer test"
		// MPropertySortPriority "900"
		bool m_bReverseZBuffering; // 0x200f		
		// MPropertyFriendlyName "disable z-buffer test"
		// MPropertySortPriority "900"
		bool m_bDisableZBuffering; // 0x2010		
	private:
		[[maybe_unused]] uint8_t __pad2011[0x3]; // 0x2011
	public:
		// MPropertyFriendlyName "Depth feathering mode"
		// MPropertySortPriority "900"
		particles::ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x2014		
		// MPropertyFriendlyName "particle feathering closest distance to surface"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x2018		
		// MPropertyFriendlyName "particle feathering farthest distance to surface"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x2178		
		// MPropertyFriendlyName "particle feathering filter"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x22d8		
		// MPropertyFriendlyName "depth comparison bias"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2438		
		// MPropertyFriendlyName "Sort Method"
		// MPropertySortPriority "900"
		particles::ParticleSortingChoiceList_t m_nSortMethod; // 0x2598		
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "blend sequence animation frames"
		// MPropertySortPriority "500"
		bool m_bBlendFramesSeq0; // 0x259c		
		// MPropertyFriendlyName "use max-luminance blending for sequence"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bBlendFramesSeq0"
		bool m_bMaxLuminanceBlendingSequence0; // 0x259d		
	};
};
