#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x530
	// Has VTable
	class CLogicRelay : public server::CLogicalEntity
	{
	public:
		entity2::CEntityIOOutput m_OnTrigger; // 0x4d8		
		entity2::CEntityIOOutput m_OnSpawn; // 0x500		
		bool m_bDisabled; // 0x528		
		bool m_bWaitForRefire; // 0x529		
		bool m_bTriggerOnce; // 0x52a		
		bool m_bFastRetrigger; // 0x52b		
		bool m_bPassthoughCaller; // 0x52c		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputEnableRefire; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// void InputTrigger; // 0x0
		// void InputCancelPending; // 0x0
	};
};
