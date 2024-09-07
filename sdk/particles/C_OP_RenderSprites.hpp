#pragma once
#include "particles/CBaseRendererSource2.hpp"
#include "particles/CReplicationParameters.hpp"
#include "particles/ParticleLightingQuality_t.hpp"
#include "particles/ParticleOrientationChoiceList_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4458
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderSprites : public particles::CBaseRendererSource2
	{
	public:
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "sequence id override"
		// MPropertySortPriority "500"
		particleslib::CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x27e8		
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "orientation type"
		// MPropertySortPriority "750"
		particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2948		
		// MPropertyFriendlyName "orientation control point"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		int32_t m_nOrientationControlPoint; // 0x294c		
		// MPropertyFriendlyName "enable yaw for particles aligned to normals"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		bool m_bUseYawWithNormalAligned; // 0x2950		
	private:
		[[maybe_unused]] uint8_t __pad2951[0x7]; // 0x2951
	public:
		// MPropertyStartGroup "Fading and culling"
		// MPropertyFriendlyName "minimum visual screen size"
		// MPropertySortPriority "1000"
		particleslib::CParticleCollectionRendererFloatInput m_flMinSize; // 0x2958		
		// MPropertyFriendlyName "maximum visual screen size"
		// MPropertySortPriority "1000"
		particleslib::CParticleCollectionRendererFloatInput m_flMaxSize; // 0x2ab8		
		// MPropertyFriendlyName "Factor to map size adjustment to alpha"
		// MPropertySortPriority "1000"
		particleslib::CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x2c18		
		// MPropertyFriendlyName "screen size to start fading"
		// MPropertySortPriority "1000"
		particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2d78		
		// MPropertyFriendlyName "screen size to fade away"
		// MPropertySortPriority "1000"
		particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2ed8		
		// MPropertyFriendlyName "start fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flStartFadeDot; // 0x3038		
		// MPropertyFriendlyName "end fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flEndFadeDot; // 0x303c		
		// MPropertyStartGroup "Distance to alpha coding"
		// MPropertyFriendlyName "distance alpha"
		// MPropertySortPriority "0"
		bool m_bDistanceAlpha; // 0x3040		
		// MPropertyFriendlyName "use soft edges for distance alpha"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bDistanceAlpha"
		bool m_bSoftEdges; // 0x3041		
	private:
		[[maybe_unused]] uint8_t __pad3042[0x2]; // 0x3042
	public:
		// MPropertyFriendlyName "start value for soft edges for distance alpha"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bDistanceAlpha"
		float m_flEdgeSoftnessStart; // 0x3044		
		// MPropertyFriendlyName "end value for soft edges for distance alpha"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bDistanceAlpha"
		float m_flEdgeSoftnessEnd; // 0x3048		
		// MPropertyStartGroup "Outlining"
		// MPropertyFriendlyName "enable particle outlining"
		// MPropertySortPriority "0"
		bool m_bOutline; // 0x304c		
		// MPropertyFriendlyName "outline color"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		Color m_OutlineColor; // 0x304d		
	private:
		[[maybe_unused]] uint8_t __pad3051[0x3]; // 0x3051
	public:
		// MPropertyFriendlyName "outline alpha"
		// MPropertyAttributeRange "0 255"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		int32_t m_nOutlineAlpha; // 0x3054		
		// MPropertyFriendlyName "outline start 0"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		float m_flOutlineStart0; // 0x3058		
		// MPropertyFriendlyName "outline start 1"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		float m_flOutlineStart1; // 0x305c		
		// MPropertyFriendlyName "outline end 0"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		float m_flOutlineEnd0; // 0x3060		
		// MPropertyFriendlyName "outline end 1"
		// MPropertySortPriority "0"
		// MPropertySuppressExpr "!m_bOutline"
		float m_flOutlineEnd1; // 0x3064		
		// MPropertyStartGroup "Lighting and Shadows"
		// MPropertyFriendlyName "lighting mode"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "mod != hlx"
		particles::ParticleLightingQuality_t m_nLightingMode; // 0x3068		
	private:
		[[maybe_unused]] uint8_t __pad306c[0x4]; // 0x306c
	public:
		// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
		// MPropertyAttributeRange "0 5"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
		particleslib::CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3070		
		// MPropertyFriendlyName "lighting directionality"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "mod != hlx"
		particleslib::CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x31d0		
		// MPropertyFriendlyName "Particle Shadows"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "mod != csgo"
		bool m_bParticleShadows; // 0x3330		
	private:
		[[maybe_unused]] uint8_t __pad3331[0x3]; // 0x3331
	public:
		// MPropertyFriendlyName "Shadow Density"
		// MPropertySortPriority "400"
		// MPropertySuppressExpr "!m_bParticleShadows"
		float m_flShadowDensity; // 0x3334		
		// MPropertyStartGroup "Replication"
		// MPropertyFriendlyName "Replication settings"
		particles::CReplicationParameters m_replicationParameters; // 0x3338		
	};
};
