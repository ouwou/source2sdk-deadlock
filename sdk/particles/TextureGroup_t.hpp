#pragma once
#include "particles/ParticleTextureLayerBlendType_t.hpp"
#include "particles/SpriteCardTextureChannel_t.hpp"
#include "particles/SpriteCardTextureType_t.hpp"
#include "particles/TextureControls_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xb58
	// 
	// MGetKV3ClassDefaults
	struct TextureGroup_t
	{
	public:
		// MPropertyFriendlyName "Enabled"
		bool m_bEnabled; // 0x0		
		// MPropertyFriendlyName "Author Texture As Gradient"
		// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
		bool m_bReplaceTextureWithGradient; // 0x1		
	private:
		[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
	public:
		// MPropertyFriendlyName "Texture"
		// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTexture; // 0x8		
		// MPropertyFriendlyName "Gradient"
		// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
		CColorGradient m_Gradient; // 0x10		
		// MPropertyFriendlyName "Texture Type"
		particles::SpriteCardTextureType_t m_nTextureType; // 0x28		
		// MPropertyFriendlyName "Channel Mix"
		// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
		particles::SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c		
		// MPropertyFriendlyName "Mix Blend Mode"
		// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
		particles::ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
	public:
		// MPropertyFriendlyName "Blend Amount"
		// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
		particleslib::CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38		
		// MPropertyFriendlyName "Texture Controls"
		// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
		particles::TextureControls_t m_TextureControls; // 0x198		
	};
};
