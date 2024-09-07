#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x240
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderStatusEffectCitadel : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "color warp texture (3d)"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureColorWarp; // 0x210		
		// MPropertyFriendlyName "normal texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureNormal; // 0x218		
		// MPropertyFriendlyName "metalness texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureMetalness; // 0x220		
		// MPropertyFriendlyName "roughness texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureRoughness; // 0x228		
		// MPropertyFriendlyName "self illum texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureSelfIllum; // 0x230		
		// MPropertyFriendlyName "detail texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDetail; // 0x238		
	};
};
