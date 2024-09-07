#pragma once
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7d8
	// Has VTable
	// 
	// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
	// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
	// MNetworkVarNames "float32 m_flSpriteFramerate"
	// MNetworkVarNames "float32 m_flFrame"
	// MNetworkVarNames "uint32 m_nBrightness"
	// MNetworkVarNames "float32 m_flBrightnessDuration"
	// MNetworkVarNames "float32 m_flSpriteScale"
	// MNetworkVarNames "float32 m_flScaleDuration"
	// MNetworkVarNames "bool m_bWorldSpaceScale"
	// MNetworkVarNames "float32 m_flGlowProxySize"
	// MNetworkVarNames "float32 m_flHDRColorScale"
	class CSprite : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial; // 0x768		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hAttachedToEntity; // 0x770		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_nAttachment; // 0x774		
	private:
		[[maybe_unused]] uint8_t __pad0775[0x3]; // 0x775
	public:
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "60.000000"
		// MNetworkEncodeFlags "2"
		float m_flSpriteFramerate; // 0x778		
		// MNetworkEnable
		// MNetworkBitCount "20"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "256.000000"
		// MNetworkEncodeFlags "1"
		float m_flFrame; // 0x77c		
		entity2::GameTime_t m_flDieTime; // 0x780		
	private:
		[[maybe_unused]] uint8_t __pad0784[0xc]; // 0x784
	public:
		// MNetworkEnable
		uint32_t m_nBrightness; // 0x790		
		// MNetworkEnable
		float m_flBrightnessDuration; // 0x794		
		// MNetworkEnable
		// MNetworkChangeCallback "OnSpriteScaleChanged"
		float m_flSpriteScale; // 0x798		
		// MNetworkEnable
		float m_flScaleDuration; // 0x79c		
		// MNetworkEnable
		bool m_bWorldSpaceScale; // 0x7a0		
	private:
		[[maybe_unused]] uint8_t __pad07a1[0x3]; // 0x7a1
	public:
		// MNetworkEnable
		// MNetworkBitCount "6"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "2"
		float m_flGlowProxySize; // 0x7a4		
		// MNetworkEnable
		float m_flHDRColorScale; // 0x7a8		
		entity2::GameTime_t m_flLastTime; // 0x7ac		
		float m_flMaxFrame; // 0x7b0		
		float m_flStartScale; // 0x7b4		
		float m_flDestScale; // 0x7b8		
		entity2::GameTime_t m_flScaleTimeStart; // 0x7bc		
		int32_t m_nStartBrightness; // 0x7c0		
		int32_t m_nDestBrightness; // 0x7c4		
		entity2::GameTime_t m_flBrightnessTimeStart; // 0x7c8		
		int32_t m_nSpriteWidth; // 0x7cc		
		int32_t m_nSpriteHeight; // 0x7d0		
		
		// Datamap fields:
		// void CSpriteAnimateThink; // 0x0
		// void CSpriteExpandThink; // 0x0
		// void CSpriteAnimateUntilDead; // 0x0
		// void CSpriteBeginFadeOutThink; // 0x0
		// void InputHideSprite; // 0x0
		// void InputShowSprite; // 0x0
		// void InputToggleSprite; // 0x0
		// float InputColorRedValue; // 0x0
		// float InputColorGreenValue; // 0x0
		// float InputColorBlueValue; // 0x0
	};
};
