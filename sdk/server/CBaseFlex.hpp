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
	// Size: 0xa08
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
		CNetworkUtlVectorBase<float> m_flexWeight; // 0x978		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vLookTargetPosition; // 0x990		
		// MNetworkEnable
		bool m_blinktoggle; // 0x99c		
	private:
		[[maybe_unused]] uint8_t __pad099d[0x53]; // 0x99d
	public:
		entity2::GameTime_t m_flAllowResponsesEndTime; // 0x9f0		
		entity2::GameTime_t m_flLastFlexAnimationTime; // 0x9f4		
		client::SceneEventId_t m_nNextSceneEventId; // 0x9f8		
		bool m_bUpdateLayerPriorities; // 0x9fc		
		
		// Datamap fields:
		// void CBaseFlexProcessSceneEventsThink; // 0x0
	};
};
