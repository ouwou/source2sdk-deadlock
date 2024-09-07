#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x950
	// Has VTable
	// 
	// MNetworkVarNames "CUtlString m_strStartTouchEventName"
	// MNetworkVarNames "CUtlString m_strEndTouchEventName"
	// MNetworkVarNames "CUtlString m_strTriggerID"
	class CTriggerGameEvent : public server::CBaseTrigger
	{
	public:
		// MNetworkEnable
		CUtlString m_strStartTouchEventName; // 0x938		
		// MNetworkEnable
		CUtlString m_strEndTouchEventName; // 0x940		
		// MNetworkEnable
		CUtlString m_strTriggerID; // 0x948		
		
		// Datamap fields:
		// CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
		// CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
	};
};
