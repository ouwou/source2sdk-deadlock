#pragma once
#include "client/CLogicalEntity.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5b0
	// Has VTable
	class CLogicRelay : public client::CLogicalEntity
	{
	public:
		entity2::CEntityIOOutput m_OnTrigger; // 0x558		
		entity2::CEntityIOOutput m_OnSpawn; // 0x580		
		bool m_bDisabled; // 0x5a8		
		bool m_bWaitForRefire; // 0x5a9		
		bool m_bTriggerOnce; // 0x5aa		
		bool m_bFastRetrigger; // 0x5ab		
		bool m_bPassthoughCaller; // 0x5ac		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputEnableRefire; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// void InputTrigger; // 0x0
		// void InputCancelPending; // 0x0
	};
};
