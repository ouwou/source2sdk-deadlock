#pragma once
#include "client/SceneEventId_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa30
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flexWeight"
	// MNetworkVarNames "Vector m_vLookTargetPosition"
	// MNetworkVarNames "bool m_blinktoggle"
	class CBaseFlex : public server::CBaseAnimGraph
	{
	public:
		// MNetworkEnable
		// MNetworkBitCount "12"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		CNetworkUtlVectorBase<float> m_flexWeight; // 0x9a0		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vLookTargetPosition; // 0x9b8		
		// MNetworkEnable
		bool m_blinktoggle; // 0x9c4		
	private:
		[[maybe_unused]] uint8_t __pad09c5[0x53]; // 0x9c5
	public:
		entity2::GameTime_t m_flAllowResponsesEndTime; // 0xa18		
		entity2::GameTime_t m_flLastFlexAnimationTime; // 0xa1c		
		client::SceneEventId_t m_nNextSceneEventId; // 0xa20		
		bool m_bUpdateLayerPriorities; // 0xa24		
		
		// Datamap fields:
		// void CBaseFlexProcessSceneEventsThink; // 0x0
	};
};
