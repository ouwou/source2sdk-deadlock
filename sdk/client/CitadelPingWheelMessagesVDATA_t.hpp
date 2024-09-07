#pragma once
#include "client/ECitadelPingWheelMessageType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MVDataRoot
	// MVDataSingleton
	// MGetKV3ClassDefaults
	struct CitadelPingWheelMessagesVDATA_t
	{
	public:
		// MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
		CUtlOrderedMap<client::ECitadelPingWheelMessageType_t,CUtlVector<CUtlString>> m_mapPingMessages; // 0x0		
	};
};
