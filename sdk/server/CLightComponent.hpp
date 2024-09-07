#pragma once
#include "entity2/CEntityComponent.hpp"
#include "entity2/CNetworkVarChainer.hpp"
#include "entity2/EntComponentInfo_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1c0
	// Has VTable
	// 
	// MNetworkVarNames "Color m_Color"
	// MNetworkVarNames "Color m_SecondaryColor"
	// MNetworkVarNames "float m_flBrightness"
	// MNetworkVarNames "float m_flBrightnessScale"
	// MNetworkVarNames "float m_flBrightnessMult"
	// MNetworkVarNames "float m_flRange"
	// MNetworkVarNames "float m_flFalloff"
	// MNetworkVarNames "float m_flAttenuation0"
	// MNetworkVarNames "float m_flAttenuation1"
	// MNetworkVarNames "float m_flAttenuation2"
	// MNetworkVarNames "float m_flTheta"
	// MNetworkVarNames "float m_flPhi"
	// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
	// MNetworkVarNames "int m_nCascades"
	// MNetworkVarNames "int m_nCastShadows"
	// MNetworkVarNames "int m_nShadowWidth"
	// MNetworkVarNames "int m_nShadowHeight"
	// MNetworkVarNames "bool m_bRenderDiffuse"
	// MNetworkVarNames "int m_nRenderSpecular"
	// MNetworkVarNames "bool m_bRenderTransmissive"
	// MNetworkVarNames "float m_flOrthoLightWidth"
	// MNetworkVarNames "float m_flOrthoLightHeight"
	// MNetworkVarNames "int m_nStyle"
	// MNetworkVarNames "CUtlString m_Pattern"
	// MNetworkVarNames "int m_nCascadeRenderStaticObjects"
	// MNetworkVarNames "float m_flShadowCascadeCrossFade"
	// MNetworkVarNames "float m_flShadowCascadeDistanceFade"
	// MNetworkVarNames "float m_flShadowCascadeDistance0"
	// MNetworkVarNames "float m_flShadowCascadeDistance1"
	// MNetworkVarNames "float m_flShadowCascadeDistance2"
	// MNetworkVarNames "float m_flShadowCascadeDistance3"
	// MNetworkVarNames "int m_nShadowCascadeResolution0"
	// MNetworkVarNames "int m_nShadowCascadeResolution1"
	// MNetworkVarNames "int m_nShadowCascadeResolution2"
	// MNetworkVarNames "int m_nShadowCascadeResolution3"
	// MNetworkVarNames "bool m_bUsesBakedShadowing"
	// MNetworkVarNames "int m_nShadowPriority"
	// MNetworkVarNames "int m_nBakedShadowIndex"
	// MNetworkVarNames "bool m_bRenderToCubemaps"
	// MNetworkVarNames "int m_nDirectLight"
	// MNetworkVarNames "int m_nIndirectLight"
	// MNetworkVarNames "float m_flFadeMinDist"
	// MNetworkVarNames "float m_flFadeMaxDist"
	// MNetworkVarNames "float m_flShadowFadeMinDist"
	// MNetworkVarNames "float m_flShadowFadeMaxDist"
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "bool m_bFlicker"
	// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
	// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
	// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
	// MNetworkVarNames "float m_flPrecomputedMaxRange"
	// MNetworkVarNames "int m_nFogLightingMode"
	// MNetworkVarNames "float m_flFogContributionStength"
	// MNetworkVarNames "float m_flNearClipPlane"
	// MNetworkVarNames "Color m_SkyColor"
	// MNetworkVarNames "float m_flSkyIntensity"
	// MNetworkVarNames "Color m_SkyAmbientBounce"
	// MNetworkVarNames "bool m_bUseSecondaryColor"
	// MNetworkVarNames "bool m_bMixedShadows"
	// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
	// MNetworkVarNames "float m_flCapsuleLength"
	// MNetworkVarNames "float m_flMinRoughness"
	class CLightComponent : public entity2::CEntityComponent
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x30]; // 0x8
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		entity2::CNetworkVarChainer __m_pChainEntity; // 0x38		
	private:
		[[maybe_unused]] uint8_t __pad0060[0x1c]; // 0x60
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		Color m_Color; // 0x7c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		Color m_SecondaryColor; // 0x80		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flBrightness; // 0x84		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flBrightnessScale; // 0x88		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flBrightnessMult; // 0x8c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flRange; // 0x90		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flFalloff; // 0x94		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flAttenuation0; // 0x98		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flAttenuation1; // 0x9c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flAttenuation2; // 0xa0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flTheta; // 0xa4		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flPhi; // 0xa8		
	private:
		[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie; // 0xb0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nCascades; // 0xb8		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nCastShadows; // 0xbc		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowWidth; // 0xc0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowHeight; // 0xc4		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		bool m_bRenderDiffuse; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nRenderSpecular; // 0xcc		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		bool m_bRenderTransmissive; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flOrthoLightWidth; // 0xd4		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flOrthoLightHeight; // 0xd8		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nStyle; // 0xdc		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		CUtlString m_Pattern; // 0xe0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nCascadeRenderStaticObjects; // 0xe8		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeCrossFade; // 0xec		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeDistanceFade; // 0xf0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeDistance0; // 0xf4		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeDistance1; // 0xf8		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeDistance2; // 0xfc		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowCascadeDistance3; // 0x100		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowCascadeResolution0; // 0x104		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowCascadeResolution1; // 0x108		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowCascadeResolution2; // 0x10c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowCascadeResolution3; // 0x110		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		// MNetworkAlias "m_bUsesIndexedBakedLighting"
		bool m_bUsesBakedShadowing; // 0x114		
	private:
		[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nShadowPriority; // 0x118		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		int32_t m_nBakedShadowIndex; // 0x11c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		bool m_bRenderToCubemaps; // 0x120		
	private:
		[[maybe_unused]] uint8_t __pad0121[0x3]; // 0x121
	public:
		// MNetworkEnable
		int32_t m_nDirectLight; // 0x124		
		// MNetworkEnable
		int32_t m_nIndirectLight; // 0x128		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flFadeMinDist; // 0x12c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flFadeMaxDist; // 0x130		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowFadeMinDist; // 0x134		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flShadowFadeMaxDist; // 0x138		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		bool m_bEnabled; // 0x13c		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		bool m_bFlicker; // 0x13d		
		// MNetworkEnable
		bool m_bPrecomputedFieldsValid; // 0x13e		
	private:
		[[maybe_unused]] uint8_t __pad013f[0x1]; // 0x13f
	public:
		// MNetworkEnable
		Vector m_vPrecomputedBoundsMins; // 0x140		
		// MNetworkEnable
		Vector m_vPrecomputedBoundsMaxs; // 0x14c		
		// MNetworkEnable
		Vector m_vPrecomputedOBBOrigin; // 0x158		
		// MNetworkEnable
		QAngle m_vPrecomputedOBBAngles; // 0x164		
		// MNetworkEnable
		Vector m_vPrecomputedOBBExtent; // 0x170		
		// MNetworkEnable
		float m_flPrecomputedMaxRange; // 0x17c		
		// MNetworkEnable
		int32_t m_nFogLightingMode; // 0x180		
		// MNetworkEnable
		float m_flFogContributionStength; // 0x184		
		// MNetworkEnable
		float m_flNearClipPlane; // 0x188		
		// MNetworkEnable
		Color m_SkyColor; // 0x18c		
		// MNetworkEnable
		float m_flSkyIntensity; // 0x190		
		// MNetworkEnable
		Color m_SkyAmbientBounce; // 0x194		
		// MNetworkEnable
		bool m_bUseSecondaryColor; // 0x198		
		// MNetworkEnable
		// MNetworkChangeCallback "MixedShadowsChanged"
		bool m_bMixedShadows; // 0x199		
	private:
		[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		entity2::GameTime_t m_flLightStyleStartTime; // 0x19c		
		// MNetworkEnable
		float m_flCapsuleLength; // 0x1a0		
		// MNetworkEnable
		// MNetworkChangeCallback "LightRenderingChanged"
		float m_flMinRoughness; // 0x1a4		
	private:
		[[maybe_unused]] uint8_t __pad01a8[0x10]; // 0x1a8
	public:
		bool m_bPvsModifyEntity; // 0x1b8		
		
		// Static fields:
		static entity2::EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<entity2::EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CLightComponent")->GetStaticFields()[1]->m_pInstance);};
		
		// Datamap fields:
		// SHIM m_bRenderSpecular; // 0xcc
		// SHIM m_bCastShadows; // 0xbc
	};
};
