#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "client/C_BaseFlex__Emphasized_Phoneme.hpp"
#include "client/SceneEventId_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcd8
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flexWeight"
	// MNetworkVarNames "bool m_blinktoggle"
	class C_BaseFlex : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x10]; // 0xb40
	public:
		// MNetworkEnable
		// MNetworkBitCount "12"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		C_NetworkUtlVectorBase<float> m_flexWeight; // 0xb50		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "OnViewTargetChanged"
		Vector m_vLookTargetPosition; // 0xb68		
	private:
		[[maybe_unused]] uint8_t __pad0b74[0xc]; // 0xb74
	public:
		// MNetworkEnable
		bool m_blinktoggle; // 0xb80		
	private:
		[[maybe_unused]] uint8_t __pad0b81[0x5f]; // 0xb81
	public:
		int32_t m_nLastFlexUpdateFrameCount; // 0xbe0		
		Vector m_CachedViewTarget; // 0xbe4		
		client::SceneEventId_t m_nNextSceneEventId; // 0xbf0		
		int32_t m_iBlink; // 0xbf4		
		float m_blinktime; // 0xbf8		
		bool m_prevblinktoggle; // 0xbfc		
	private:
		[[maybe_unused]] uint8_t __pad0bfd[0x3]; // 0xbfd
	public:
		int32_t m_iJawOpen; // 0xc00		
		float m_flJawOpenAmount; // 0xc04		
		float m_flBlinkAmount; // 0xc08		
		modellib::AttachmentHandle_t m_iMouthAttachment; // 0xc0c		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc0d		
		bool m_bResetFlexWeightsOnModelChange; // 0xc0e		
	private:
		[[maybe_unused]] uint8_t __pad0c0f[0x19]; // 0xc0f
	public:
		int32_t m_nEyeOcclusionRendererBone; // 0xc28		
		matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xc2c		
		Vector m_vEyeOcclusionRendererHalfExtent; // 0xc5c		
	private:
		[[maybe_unused]] uint8_t __pad0c68[0x10]; // 0xc68
	public:
		client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xc78		
	};
};
