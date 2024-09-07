#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "int m_nColorMode"
	// MNetworkVarNames "Color m_Color"
	// MNetworkVarNames "float m_flColorTemperature"
	// MNetworkVarNames "float m_flBrightness"
	// MNetworkVarNames "float m_flBrightnessScale"
	// MNetworkVarNames "int m_nDirectLight"
	// MNetworkVarNames "int m_nBakedShadowIndex"
	// MNetworkVarNames "int m_nLuminaireShape"
	// MNetworkVarNames "float m_flLuminaireSize"
	// MNetworkVarNames "float m_flLuminaireAnisotropy"
	// MNetworkVarNames "CUtlString m_LightStyleString"
	// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
	// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
	// MNetworkVarNames "CUtlString m_LightStyleEvents"
	// MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
	// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
	// MNetworkVarNames "float m_flShape"
	// MNetworkVarNames "float m_flSoftX"
	// MNetworkVarNames "float m_flSoftY"
	// MNetworkVarNames "float m_flSkirt"
	// MNetworkVarNames "float m_flSkirtNear"
	// MNetworkVarNames "Vector m_vSizeParams"
	// MNetworkVarNames "float m_flRange"
	// MNetworkVarNames "Vector m_vShear"
	// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
	// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
	// MNetworkVarNames "int m_nCastShadows"
	// MNetworkVarNames "int m_nShadowMapSize"
	// MNetworkVarNames "int m_nShadowPriority"
	// MNetworkVarNames "bool m_bContactShadow"
	// MNetworkVarNames "int m_nBounceLight"
	// MNetworkVarNames "float m_flBounceScale"
	// MNetworkVarNames "float m_flMinRoughness"
	// MNetworkVarNames "Vector m_vAlternateColor"
	// MNetworkVarNames "float m_fAlternateColorBrightness"
	// MNetworkVarNames "int m_nFog"
	// MNetworkVarNames "float m_flFogStrength"
	// MNetworkVarNames "int m_nFogShadows"
	// MNetworkVarNames "float m_flFogScale"
	// MNetworkVarNames "bool m_bFogMixedShadows"
	// MNetworkVarNames "float m_flFadeSizeStart"
	// MNetworkVarNames "float m_flFadeSizeEnd"
	// MNetworkVarNames "float m_flShadowFadeSizeStart"
	// MNetworkVarNames "float m_flShadowFadeSizeEnd"
	// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
	// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
	// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
	// MNetworkVarNames "int m_nPrecomputedSubFrusta"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
	// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
	// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
	// MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
	// MNetworkVarNames "uint16 m_VisClusters"
	class C_BarnLight : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bEnabled; // 0x830		
	private:
		[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nColorMode; // 0x834		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Color m_Color; // 0x838		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flColorTemperature; // 0x83c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flBrightness; // 0x840		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flBrightnessScale; // 0x844		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nDirectLight; // 0x848		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nBakedShadowIndex; // 0x84c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nLuminaireShape; // 0x850		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flLuminaireSize; // 0x854		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flLuminaireAnisotropy; // 0x858		
	private:
		[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "StyleChanged"
		CUtlString m_LightStyleString; // 0x860		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		entity2::GameTime_t m_flLightStyleStartTime; // 0x868		
	private:
		[[maybe_unused]] uint8_t __pad086c[0x4]; // 0x86c
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings; // 0x870		
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents; // 0x888		
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_LightStyleTargets; // 0x8a0		
		entity2::CEntityIOOutput m_StyleEvent[4]; // 0x8b8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie; // 0x958		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShape; // 0x960		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSoftX; // 0x964		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSoftY; // 0x968		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSkirt; // 0x96c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSkirtNear; // 0x970		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vSizeParams; // 0x974		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		float m_flRange; // 0x980		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vShear; // 0x984		
		// MNetworkEnable
		int32_t m_nBakeSpecularToCubemaps; // 0x990		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vBakeSpecularToCubemapsSize; // 0x994		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nCastShadows; // 0x9a0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nShadowMapSize; // 0x9a4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nShadowPriority; // 0x9a8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bContactShadow; // 0x9ac		
	private:
		[[maybe_unused]] uint8_t __pad09ad[0x3]; // 0x9ad
	public:
		// MNetworkEnable
		int32_t m_nBounceLight; // 0x9b0		
		// MNetworkEnable
		float m_flBounceScale; // 0x9b4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flMinRoughness; // 0x9b8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vAlternateColor; // 0x9bc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_fAlternateColorBrightness; // 0x9c8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nFog; // 0x9cc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFogStrength; // 0x9d0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nFogShadows; // 0x9d4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFogScale; // 0x9d8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bFogMixedShadows; // 0x9dc		
	private:
		[[maybe_unused]] uint8_t __pad09dd[0x3]; // 0x9dd
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFadeSizeStart; // 0x9e0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFadeSizeEnd; // 0x9e4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShadowFadeSizeStart; // 0x9e8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShadowFadeSizeEnd; // 0x9ec		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bPrecomputedFieldsValid; // 0x9f0		
	private:
		[[maybe_unused]] uint8_t __pad09f1[0x3]; // 0x9f1
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedBoundsMins; // 0x9f4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedBoundsMaxs; // 0xa00		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin; // 0xa0c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles; // 0xa18		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent; // 0xa24		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nPrecomputedSubFrusta; // 0xa30		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin0; // 0xa34		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles0; // 0xa40		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent0; // 0xa4c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin1; // 0xa58		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles1; // 0xa64		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent1; // 0xa70		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin2; // 0xa7c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles2; // 0xa88		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent2; // 0xa94		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin3; // 0xaa0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles3; // 0xaac		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent3; // 0xab8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin4; // 0xac4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles4; // 0xad0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent4; // 0xadc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin5; // 0xae8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles5; // 0xaf4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent5; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b0c[0x44]; // 0xb0c
	public:
		bool m_bInitialBoneSetup; // 0xb50		
	private:
		[[maybe_unused]] uint8_t __pad0b51[0x7]; // 0xb51
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		C_NetworkUtlVectorBase<uint16_t> m_VisClusters; // 0xb58		
		
		// Datamap fields:
		// void m_StyleEvent[0]; // 0x8b8
		// void m_StyleEvent[1]; // 0x8e0
		// void m_StyleEvent[2]; // 0x908
		// void m_StyleEvent[3]; // 0x930
	};
};
