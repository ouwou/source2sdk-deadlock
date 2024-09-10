#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xbd8
	// Has VTable
	class C_ClientRagdoll : public client::CBaseAnimGraph
	{
	public:
		bool m_bFadeOut; // 0xb40		
		bool m_bImportant; // 0xb41		
	private:
		[[maybe_unused]] uint8_t __pad0b42[0x2]; // 0xb42
	public:
		entity2::GameTime_t m_flEffectTime; // 0xb44		
		entity2::GameTime_t m_gibDespawnTime; // 0xb48		
		int32_t m_iCurrentFriction; // 0xb4c		
		int32_t m_iMinFriction; // 0xb50		
		int32_t m_iMaxFriction; // 0xb54		
		int32_t m_iFrictionAnimState; // 0xb58		
		bool m_bReleaseRagdoll; // 0xb5c		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb5d		
		bool m_bFadingOut; // 0xb5e		
	private:
		[[maybe_unused]] uint8_t __pad0b5f[0x1]; // 0xb5f
	public:
		float m_flScaleEnd[10]; // 0xb60		
		entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb88		
		entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xbb0		
		
		// Datamap fields:
		// Color m_clrRender; // 0x5f8
	};
};
