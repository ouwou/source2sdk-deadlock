#pragma once
#include "particles/SpriteCardPerParticleScale_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x9c0
	// 
	// MGetKV3ClassDefaults
	struct TextureControls_t
	{
	public:
		// MPropertyFriendlyName "horizontal texture scale"
		particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0		
		// MPropertyFriendlyName "vertical texture scale"
		particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x160		
		// MPropertyFriendlyName "horizontal texture offset"
		particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2c0		
		// MPropertyFriendlyName "vertical texture offset"
		particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x420		
		// MPropertyFriendlyName "texture rotation / animation rate scale"
		particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x580		
		// MPropertyFriendlyName "Infinite Zoom Scale"
		particleslib::CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6e0		
		// MPropertyFriendlyName "Distortion Amount"
		particleslib::CParticleCollectionRendererFloatInput m_flDistortion; // 0x840		
		// MPropertyFriendlyName "Randomize Initial Offset"
		bool m_bRandomizeOffsets; // 0x9a0		
		// MPropertyFriendlyName "Clamp UVs"
		bool m_bClampUVs; // 0x9a1		
	private:
		[[maybe_unused]] uint8_t __pad09a2[0x2]; // 0x9a2
	public:
		// MPropertyFriendlyName "per-particle scalar for blend"
		particles::SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x9a4		
		// MPropertyFriendlyName "per-particle scalar for scale"
		particles::SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x9a8		
		// MPropertyFriendlyName "per-particle scalar for horizontal offset"
		particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x9ac		
		// MPropertyFriendlyName "per-particle scalar for vertical offset"
		particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x9b0		
		// MPropertyFriendlyName "per-particle scalar for rotation"
		particles::SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x9b4		
		// MPropertyFriendlyName "per-particle scalar for zoom"
		particles::SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x9b8		
		// MPropertyFriendlyName "per-particle scalar for distortion"
		particles::SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x9bc		
	};
};
