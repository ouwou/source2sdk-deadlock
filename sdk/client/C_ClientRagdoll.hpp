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
	// Size: 0xb28
	// Has VTable
	class C_ClientRagdoll : public client::CBaseAnimGraph
	{
	public:
		bool m_bFadeOut; // 0xa90		
		bool m_bImportant; // 0xa91		
	private:
		[[maybe_unused]] uint8_t __pad0a92[0x2]; // 0xa92
	public:
		entity2::GameTime_t m_flEffectTime; // 0xa94		
		entity2::GameTime_t m_gibDespawnTime; // 0xa98		
		int32_t m_iCurrentFriction; // 0xa9c		
		int32_t m_iMinFriction; // 0xaa0		
		int32_t m_iMaxFriction; // 0xaa4		
		int32_t m_iFrictionAnimState; // 0xaa8		
		bool m_bReleaseRagdoll; // 0xaac		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xaad		
		bool m_bFadingOut; // 0xaae		
	private:
		[[maybe_unused]] uint8_t __pad0aaf[0x1]; // 0xaaf
	public:
		float m_flScaleEnd[10]; // 0xab0		
		entity2::GameTime_t m_flScaleTimeStart[10]; // 0xad8		
		entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xb00		
		
		// Datamap fields:
		// Color m_clrRender; // 0x5f8
	};
};
