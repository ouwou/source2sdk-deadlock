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
	// Size: 0x248
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderStatusEffect : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "color warp texture (3d)"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureColorWarp; // 0x210		
		// MPropertyFriendlyName "detail 2 texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDetail2; // 0x218		
		// MPropertyFriendlyName "diffuse warp texture (3d)"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureDiffuseWarp; // 0x220		
		// MPropertyFriendlyName "fresnel color warp texture (3d)"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureFresnelColorWarp; // 0x228		
		// MPropertyFriendlyName "fresnel warp texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureFresnelWarp; // 0x230		
		// MPropertyFriendlyName "specular warp texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureSpecularWarp; // 0x238		
		// MPropertyFriendlyName "environment map texture"
		// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureEnvMap; // 0x240		
	};
};
