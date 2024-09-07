#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x960
	// Has VTable
	class CTriggerMultiple : public server::CBaseTrigger
	{
	public:
		entity2::CEntityIOOutput m_OnTrigger; // 0x938		
		
		// Datamap fields:
		// void CTriggerMultipleMultiTouch; // 0x0
		// void CTriggerMultipleMultiWaitOver; // 0x0
	};
};
