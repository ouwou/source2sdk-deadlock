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
	// Size: 0x528
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bEnabled"
	class CLogicGameEventListener : public server::CLogicalEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x10]; // 0x4d8
	public:
		entity2::CEntityIOOutput m_OnEventFired; // 0x4e8		
		CUtlSymbolLarge m_iszGameEventName; // 0x510		
		CUtlSymbolLarge m_iszGameEventItem; // 0x518		
		// MNetworkEnable
		bool m_bEnabled; // 0x520		
		bool m_bStartDisabled; // 0x521		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
	};
};
