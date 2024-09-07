#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa88
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
	// MNetworkVarNames "CHandle< CBaseModelEntity > m_LightStyleTargets"
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
	class CBarnLight : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bEnabled; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nColorMode; // 0x76c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Color m_Color; // 0x770		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flColorTemperature; // 0x774		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flBrightness; // 0x778		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flBrightnessScale; // 0x77c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nDirectLight; // 0x780		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nBakedShadowIndex; // 0x784		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nLuminaireShape; // 0x788		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flLuminaireSize; // 0x78c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flLuminaireAnisotropy; // 0x790		
	private:
		[[maybe_unused]] uint8_t __pad0794[0x4]; // 0x794
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "StyleChanged"
		CUtlString m_LightStyleString; // 0x798		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		entity2::GameTime_t m_flLightStyleStartTime; // 0x7a0		
	private:
		[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings; // 0x7a8		
		// MNetworkEnable
		CNetworkUtlVectorBase<CUtlString> m_LightStyleEvents; // 0x7c0		
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_LightStyleTargets; // 0x7d8		
		entity2::CEntityIOOutput m_StyleEvent[4]; // 0x7f0		
	private:
		[[maybe_unused]] uint8_t __pad0890[0x20]; // 0x890
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie; // 0x8b0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShape; // 0x8b8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSoftX; // 0x8bc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSoftY; // 0x8c0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSkirt; // 0x8c4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flSkirtNear; // 0x8c8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vSizeParams; // 0x8cc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		float m_flRange; // 0x8d8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vShear; // 0x8dc		
		// MNetworkEnable
		int32_t m_nBakeSpecularToCubemaps; // 0x8e8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		// MNetworkBitCount "32"
		Vector m_vBakeSpecularToCubemapsSize; // 0x8ec		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nCastShadows; // 0x8f8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nShadowMapSize; // 0x8fc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nShadowPriority; // 0x900		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bContactShadow; // 0x904		
	private:
		[[maybe_unused]] uint8_t __pad0905[0x3]; // 0x905
	public:
		// MNetworkEnable
		int32_t m_nBounceLight; // 0x908		
		// MNetworkEnable
		float m_flBounceScale; // 0x90c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flMinRoughness; // 0x910		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vAlternateColor; // 0x914		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_fAlternateColorBrightness; // 0x920		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nFog; // 0x924		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFogStrength; // 0x928		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nFogShadows; // 0x92c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFogScale; // 0x930		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bFogMixedShadows; // 0x934		
	private:
		[[maybe_unused]] uint8_t __pad0935[0x3]; // 0x935
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFadeSizeStart; // 0x938		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flFadeSizeEnd; // 0x93c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShadowFadeSizeStart; // 0x940		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flShadowFadeSizeEnd; // 0x944		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bPrecomputedFieldsValid; // 0x948		
	private:
		[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedBoundsMins; // 0x94c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedBoundsMaxs; // 0x958		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin; // 0x964		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles; // 0x970		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent; // 0x97c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		int32_t m_nPrecomputedSubFrusta; // 0x988		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin0; // 0x98c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles0; // 0x998		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent0; // 0x9a4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin1; // 0x9b0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles1; // 0x9bc		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent1; // 0x9c8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin2; // 0x9d4		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles2; // 0x9e0		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent2; // 0x9ec		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin3; // 0x9f8		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles3; // 0xa04		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent3; // 0xa10		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin4; // 0xa1c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles4; // 0xa28		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent4; // 0xa34		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBOrigin5; // 0xa40		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		QAngle m_vPrecomputedOBBAngles5; // 0xa4c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		Vector m_vPrecomputedOBBExtent5; // 0xa58		
		bool m_bPvsModifyEntity; // 0xa64		
	private:
		[[maybe_unused]] uint8_t __pad0a65[0x3]; // 0xa65
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		CNetworkUtlVectorBase<uint16_t> m_VisClusters; // 0xa68		
		
		// Datamap fields:
		// void m_StyleEvent[0]; // 0x7f0
		// void m_StyleEvent[1]; // 0x818
		// void m_StyleEvent[2]; // 0x840
		// void m_StyleEvent[3]; // 0x868
		// void CBarnLightThink_SetNextQueuedLightStyle; // 0x0
		// void CBarnLightThink_ApplyLightStylesToTargets; // 0x0
		// void CBarnLightThink_LightStyleEvent; // 0x0
	};
};
