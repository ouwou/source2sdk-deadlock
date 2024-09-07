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
	// Size: 0xc28
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flexWeight"
	// MNetworkVarNames "bool m_blinktoggle"
	class C_BaseFlex : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0a90[0x10]; // 0xa90
	public:
		// MNetworkEnable
		// MNetworkBitCount "12"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		C_NetworkUtlVectorBase<float> m_flexWeight; // 0xaa0		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "OnViewTargetChanged"
		Vector m_vLookTargetPosition; // 0xab8		
	private:
		[[maybe_unused]] uint8_t __pad0ac4[0xc]; // 0xac4
	public:
		// MNetworkEnable
		bool m_blinktoggle; // 0xad0		
	private:
		[[maybe_unused]] uint8_t __pad0ad1[0x5f]; // 0xad1
	public:
		int32_t m_nLastFlexUpdateFrameCount; // 0xb30		
		Vector m_CachedViewTarget; // 0xb34		
		client::SceneEventId_t m_nNextSceneEventId; // 0xb40		
		int32_t m_iBlink; // 0xb44		
		float m_blinktime; // 0xb48		
		bool m_prevblinktoggle; // 0xb4c		
	private:
		[[maybe_unused]] uint8_t __pad0b4d[0x3]; // 0xb4d
	public:
		int32_t m_iJawOpen; // 0xb50		
		float m_flJawOpenAmount; // 0xb54		
		float m_flBlinkAmount; // 0xb58		
		modellib::AttachmentHandle_t m_iMouthAttachment; // 0xb5c		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb5d		
		bool m_bResetFlexWeightsOnModelChange; // 0xb5e		
	private:
		[[maybe_unused]] uint8_t __pad0b5f[0x19]; // 0xb5f
	public:
		int32_t m_nEyeOcclusionRendererBone; // 0xb78		
		matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xb7c		
		Vector m_vEyeOcclusionRendererHalfExtent; // 0xbac		
	private:
		[[maybe_unused]] uint8_t __pad0bb8[0x10]; // 0xbb8
	public:
		client::C_BaseFlex__Emphasized_Phoneme m_PhonemeClasses[3]; // 0xbc8		
	};
};
