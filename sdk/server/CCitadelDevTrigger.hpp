#pragma once
#include "server/CBaseTrigger.hpp"
#include "server/DevTriggerType_t.hpp"
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
	class CCitadelDevTrigger : public server::CBaseTrigger
	{
	public:
		server::DevTriggerType_t m_eDevTriggerType; // 0x938		
	};
};
