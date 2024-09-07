#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/MaterialVariable_t.hpp"
#include "particles/ModelReference_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/RenderModelSubModelFieldType_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleModelInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x29b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderModels : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "Only Render in effects bloom pass"
		// MPropertySortPriority "1100"
		bool m_bOnlyRenderInEffectsBloomPass; // 0x210		
		// MPropertyFriendlyName "Only Render in effects water pass"
		// MPropertySortPriority "1050"
		// MPropertySuppressExpr "mod != csgo"
		bool m_bOnlyRenderInEffectsWaterPass; // 0x211		
		// MPropertyFriendlyName "Use Mixed Resolution Rendering"
		// MPropertySortPriority "1200"
		bool m_bUseMixedResolutionRendering; // 0x212		
		// MPropertyFriendlyName "Only Render in effects game overlay pass"
		// MPropertySortPriority "1210"
		// MPropertySuppressExpr "mod != csgo"
		bool m_bOnlyRenderInEffecsGameOverlay; // 0x213		
	private:
		[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
	public:
		// MPropertyFriendlyName "models"
		// MParticleRequireDefaultArrayEntry
		// MPropertyAutoExpandSelf
		// MPropertySortPriority "775"
		CUtlVector<particles::ModelReference_t> m_ModelList; // 0x218		
		// MPropertyFriendlyName "bodygroup field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nBodyGroupField; // 0x230		
		// MPropertyFriendlyName "submodel field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nSubModelField; // 0x234		
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "ignore normal"
		// MPropertySortPriority "750"
		bool m_bIgnoreNormal; // 0x238		
		// MPropertyFriendlyName "orient model z to normal"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_bIgnoreNormal"
		bool m_bOrientZ; // 0x239		
		// MPropertyFriendlyName "center mesh"
		// MPropertySortPriority "750"
		bool m_bCenterOffset; // 0x23a		
	private:
		[[maybe_unused]] uint8_t __pad023b[0x5]; // 0x23b
	public:
		// MPropertyFriendlyName "model local offset"
		// MPropertySortPriority "750"
		particleslib::CPerParticleVecInput m_vecLocalOffset; // 0x240		
		// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
		// MPropertySortPriority "750"
		particleslib::CPerParticleVecInput m_vecLocalRotation; // 0x8b8		
		// MPropertyStartGroup "Model Scale"
		// MPropertyFriendlyName "ignore radius"
		// MPropertySortPriority "700"
		bool m_bIgnoreRadius; // 0xf30		
	private:
		[[maybe_unused]] uint8_t __pad0f31[0x3]; // 0xf31
	public:
		// MPropertyFriendlyName "model scale CP"
		// MPropertySortPriority "700"
		int32_t m_nModelScaleCP; // 0xf34		
		// MPropertyFriendlyName "model component scale"
		// MPropertySortPriority "700"
		particleslib::CPerParticleVecInput m_vecComponentScale; // 0xf38		
		// MPropertyFriendlyName "apply scales in local model space"
		// MPropertySortPriority "700"
		bool m_bLocalScale; // 0x15b0		
	private:
		[[maybe_unused]] uint8_t __pad15b1[0x3]; // 0x15b1
	public:
		// MPropertyFriendlyName "model size cull bloat"
		// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
		int32_t m_nSizeCullBloat; // 0x15b4		
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "animated"
		// MPropertySortPriority "500"
		bool m_bAnimated; // 0x15b8		
	private:
		[[maybe_unused]] uint8_t __pad15b9[0x7]; // 0x15b9
	public:
		// MPropertyFriendlyName "animation rate"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bAnimated"
		particleslib::CPerParticleFloatInput m_flAnimationRate; // 0x15c0		
		// MPropertyFriendlyName "scale animation rate"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bAnimated"
		bool m_bScaleAnimationRate; // 0x1720		
		// MPropertyFriendlyName "force looping animations"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bAnimated"
		bool m_bForceLoopingAnimation; // 0x1721		
		// MPropertyFriendlyName "reset animation frame on stop"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bAnimated"
		bool m_bResetAnimOnStop; // 0x1722		
		// MPropertyFriendlyName "set animation frame manually"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!m_bAnimated"
		bool m_bManualAnimFrame; // 0x1723		
		// MPropertyFriendlyName "animation rate scale field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!(m_bAnimated && m_bScaleAnimationRate)"
		particles::ParticleAttributeIndex_t m_nAnimationScaleField; // 0x1724		
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "animation sequence field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "500"
		particles::ParticleAttributeIndex_t m_nAnimationField; // 0x1728		
		// MPropertyFriendlyName "manual animation frame field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "500"
		// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
		particles::ParticleAttributeIndex_t m_nManualFrameField; // 0x172c		
		// MPropertyFriendlyName "activity override"
		// MPropertySuppressExpr "mod != dota"
		// MPropertySortPriority "500"
		char m_ActivityName[256]; // 0x1730		
		// MPropertyFriendlyName "sequence override"
		// MPropertySuppressExpr "mod == dota"
		// MPropertySortPriority "500"
		char m_SequenceName[256]; // 0x1830		
		// MPropertyFriendlyName "Enable Cloth Simulation"
		bool m_bEnableClothSimulation; // 0x1930		
		// MPropertyFriendlyName "With Cloth Effect"
		// MPropertySortPriority "500"
		char m_ClothEffectName[64]; // 0x1931		
	private:
		[[maybe_unused]] uint8_t __pad1971[0x7]; // 0x1971
	public:
		// MPropertyStartGroup "Material"
		// MPropertyFriendlyName "material override"
		// MPropertySortPriority "600"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial; // 0x1978		
		// MPropertyFriendlyName "override translucent materials"
		// MPropertySortPriority "600"
		bool m_bOverrideTranslucentMaterials; // 0x1980		
	private:
		[[maybe_unused]] uint8_t __pad1981[0x7]; // 0x1981
	public:
		// MPropertyFriendlyName "skin number"
		// MPropertySortPriority "600"
		particleslib::CPerParticleFloatInput m_nSkin; // 0x1988		
		// MPropertyFriendlyName "material variables"
		// MPropertyAutoExpandSelf
		// MPropertySortPriority "600"
		CUtlVector<particles::MaterialVariable_t> m_MaterialVars; // 0x1ae8		
		// MPropertyStartGroup "Model Overrides"
		// MPropertyFriendlyName "model list selection override"
		particleslib::CPerParticleFloatInput m_flManualModelSelection; // 0x1b00		
		// MPropertyFriendlyName "input model"
		// MParticleInputOptional
		particleslib::CParticleModelInput m_modelInput; // 0x1c60		
		// MPropertyFriendlyName "model LOD"
		int32_t m_nLOD; // 0x1cc0		
		// MPropertyFriendlyName "model override economy loadout slot type"
		char m_EconSlotName[256]; // 0x1cc4		
		// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
		bool m_bOriginalModel; // 0x1dc4		
		// MPropertyFriendlyName "suppress tinting of the model"
		bool m_bSuppressTint; // 0x1dc5		
	private:
		[[maybe_unused]] uint8_t __pad1dc6[0x2]; // 0x1dc6
	public:
		// MPropertyFriendlyName "SubModel Field Type"
		particles::RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x1dc8		
		// MPropertyFriendlyName "disable shadows"
		bool m_bDisableShadows; // 0x1dcc		
		// MPropertyFriendlyName "disable depth prepass"
		bool m_bDisableDepthPrepass; // 0x1dcd		
		// MPropertyFriendlyName "accept decals"
		bool m_bAcceptsDecals; // 0x1dce		
		// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
		bool m_bForceDrawInterlevedWithSiblings; // 0x1dcf		
		// MPropertyFriendlyName "do not draw in particle pass"
		bool m_bDoNotDrawInParticlePass; // 0x1dd0		
		// MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
		bool m_bAllowApproximateTransforms; // 0x1dd1		
		// MPropertyFriendlyName "render attribute"
		char m_szRenderAttribute[260]; // 0x1dd2		
	private:
		[[maybe_unused]] uint8_t __pad1ed6[0x2]; // 0x1ed6
	public:
		// MPropertyStartGroup "+Renderer Modifiers"
		// MPropertyFriendlyName "Radius Scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x1ed8		
		// MPropertyFriendlyName "alpha scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x2038		
		// MPropertyFriendlyName "rotation roll scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x2198		
		// MPropertyFriendlyName "per-particle alpha scale attribute"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "700"
		particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x22f8		
	private:
		[[maybe_unused]] uint8_t __pad22fc[0x4]; // 0x22fc
	public:
		// MPropertyFriendlyName "color blend"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x2300		
		// MPropertyFriendlyName "color blend type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0x2978		
	};
};
