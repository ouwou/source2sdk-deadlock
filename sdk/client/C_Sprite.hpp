#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x940
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
	class C_Sprite : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial; // 0x830		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hAttachedToEntity; // 0x838		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_nAttachment; // 0x83c		
	private:
		[[maybe_unused]] uint8_t __pad083d[0x3]; // 0x83d
	public:
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "60.000000"
		// MNetworkEncodeFlags "2"
		float m_flSpriteFramerate; // 0x840		
		// MNetworkEnable
		// MNetworkBitCount "20"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "256.000000"
		// MNetworkEncodeFlags "1"
		float m_flFrame; // 0x844		
		entity2::GameTime_t m_flDieTime; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad084c[0xc]; // 0x84c
	public:
		// MNetworkEnable
		uint32_t m_nBrightness; // 0x858		
		// MNetworkEnable
		float m_flBrightnessDuration; // 0x85c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnSpriteScaleChanged"
		float m_flSpriteScale; // 0x860		
		// MNetworkEnable
		float m_flScaleDuration; // 0x864		
		// MNetworkEnable
		bool m_bWorldSpaceScale; // 0x868		
	private:
		[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
	public:
		// MNetworkEnable
		// MNetworkBitCount "6"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "2"
		float m_flGlowProxySize; // 0x86c		
		// MNetworkEnable
		float m_flHDRColorScale; // 0x870		
		entity2::GameTime_t m_flLastTime; // 0x874		
		float m_flMaxFrame; // 0x878		
		float m_flStartScale; // 0x87c		
		float m_flDestScale; // 0x880		
		entity2::GameTime_t m_flScaleTimeStart; // 0x884		
		int32_t m_nStartBrightness; // 0x888		
		int32_t m_nDestBrightness; // 0x88c		
		entity2::GameTime_t m_flBrightnessTimeStart; // 0x890		
	private:
		[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
	public:
		CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial; // 0x898		
	private:
		[[maybe_unused]] uint8_t __pad08a0[0x98]; // 0x8a0
	public:
		int32_t m_nSpriteWidth; // 0x938		
		int32_t m_nSpriteHeight; // 0x93c		
	};
};
