#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/MaterialVariable_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/RenderProjectedMaterial_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
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
	// Size: 0xe78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderProjected : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "project on characters"
		bool m_bProjectCharacter; // 0x210		
		// MPropertyFriendlyName "project on world"
		bool m_bProjectWorld; // 0x211		
		// MPropertyFriendlyName "project on water"
		bool m_bProjectWater; // 0x212		
		// MPropertyFriendlyName "flip horizontal"
		bool m_bFlipHorizontal; // 0x213		
		// MPropertyFriendlyName "enable projected depth controls"
		bool m_bEnableProjectedDepthControls; // 0x214		
	private:
		[[maybe_unused]] uint8_t __pad0215[0x3]; // 0x215
	public:
		// MPropertyFriendlyName "min projection depth"
		// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
		float m_flMinProjectionDepth; // 0x218		
		// MPropertyFriendlyName "max projection depth"
		// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
		float m_flMaxProjectionDepth; // 0x21c		
		// MPropertyFriendlyName "materials"
		// MParticleRequireDefaultArrayEntry
		// MPropertyAutoExpandSelf
		CUtlVector<particles::RenderProjectedMaterial_t> m_vecProjectedMaterials; // 0x220		
		// MPropertyFriendlyName "material selection"
		particleslib::CPerParticleFloatInput m_flMaterialSelection; // 0x238		
		// MPropertyFriendlyName "sheet animation time scale"
		float m_flAnimationTimeScale; // 0x398		
		// MPropertyFriendlyName "orient to normal"
		bool m_bOrientToNormal; // 0x39c		
	private:
		[[maybe_unused]] uint8_t __pad039d[0x3]; // 0x39d
	public:
		// MPropertyFriendlyName "material variables"
		// MPropertyAutoExpandSelf
		CUtlVector<particles::MaterialVariable_t> m_MaterialVars; // 0x3a0		
		// MPropertyStartGroup "+Renderer Modifiers"
		// MPropertyFriendlyName "Radius Scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x3b8		
		// MPropertyFriendlyName "alpha scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x518		
		// MPropertyFriendlyName "rotation roll scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x678		
		// MPropertyFriendlyName "per-particle alpha scale attribute"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySortPriority "700"
		particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x7d8		
	private:
		[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
	public:
		// MPropertyFriendlyName "color blend"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x7e0		
		// MPropertyFriendlyName "color blend type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0xe58		
	};
};
