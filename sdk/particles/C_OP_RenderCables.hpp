#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/FloatInputMaterialVariable_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particles/TextureRepetitionMode_t.hpp"
#include "particles/VecInputMaterialVariable_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1488
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderCables : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyStartGroup "Renderer Modifiers"
		// MPropertyFriendlyName "Radius Scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x210		
		// MPropertyFriendlyName "alpha scale"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x370		
		// MPropertyFriendlyName "color blend"
		// MPropertySortPriority "700"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x4d0		
		// MPropertyFriendlyName "color blend type"
		// MPropertySortPriority "700"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0xb48		
	private:
		[[maybe_unused]] uint8_t __pad0b4c[0x4]; // 0xb4c
	public:
		// MPropertyStartGroup
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0xb50		
		// MPropertyFriendlyName "texture repetition mode"
		particles::TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xb58		
	private:
		[[maybe_unused]] uint8_t __pad0b5c[0x4]; // 0xb5c
	public:
		// MPropertyFriendlyName "texture repetitions"
		particleslib::CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xb60		
		// MPropertyFriendlyName "texture repetitions around cable"
		particleslib::CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xcc0		
		// MPropertyFriendlyName "color map offset along path"
		particleslib::CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xe20		
		// MPropertyFriendlyName "color map offset around cable"
		particleslib::CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xf80		
		// MPropertyFriendlyName "normal map offset along path"
		particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x10e0		
		// MPropertyFriendlyName "normal map offset around cable"
		particleslib::CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1240		
		// MPropertyFriendlyName "draw caps at each end of the cable"
		bool m_bDrawCableCaps; // 0x13a0		
	private:
		[[maybe_unused]] uint8_t __pad13a1[0x3]; // 0x13a1
	public:
		// MPropertyFriendlyName "cable end cap shape factor"
		// MPropertyAttributeRange "0 2"
		float m_flCapRoundness; // 0x13a4		
		// MPropertyFriendlyName "cable end cap offset amount"
		// MPropertyAttributeRange "0 2"
		float m_flCapOffsetAmount; // 0x13a8		
		// MPropertyFriendlyName "tessellation scale factor"
		float m_flTessScale; // 0x13ac		
		// MPropertyFriendlyName "minimum steps between particles"
		int32_t m_nMinTesselation; // 0x13b0		
		// MPropertyFriendlyName "maximum steps between particles"
		int32_t m_nMaxTesselation; // 0x13b4		
		// MPropertyFriendlyName "roundness factor"
		int32_t m_nRoundness; // 0x13b8		
	private:
		[[maybe_unused]] uint8_t __pad13bc[0x4]; // 0x13bc
	public:
		// MPropertyFriendlyName "diffuse lighting origin"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_LightingTransform; // 0x13c0		
		// MPropertyFriendlyName "material float variables"
		CUtlVector<particles::FloatInputMaterialVariable_t> m_MaterialFloatVars; // 0x1428		
	private:
		[[maybe_unused]] uint8_t __pad1440[0x18]; // 0x1440
	public:
		// MPropertyFriendlyName "material vector variables"
		CUtlVector<particles::VecInputMaterialVariable_t> m_MaterialVecVars; // 0x1458		
	};
};
