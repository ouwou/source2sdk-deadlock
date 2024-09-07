#pragma once
#include "client/ECitadelPingLocation_t.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x940
	// Has VTable
	class CTriggerPingLocation : public server::CBaseTrigger
	{
	public:
		client::ECitadelPingLocation_t m_ePingLocation; // 0x938		
	};
};
