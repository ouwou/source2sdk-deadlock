#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	class CEnvGlobal : public server::CLogicalEntity
	{
	public:
		CEntityOutputTemplate<int32_t> m_outCounter; // 0x4d8		
		CUtlSymbolLarge m_globalstate; // 0x500		
		int32_t m_triggermode; // 0x508		
		int32_t m_initialstate; // 0x50c		
		int32_t m_counter; // 0x510		
		
		// Datamap fields:
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputRemove; // 0x0
		// void InputToggle; // 0x0
		// int32_t InputSetCounter; // 0x0
		// int32_t InputAddToCounter; // 0x0
		// void InputGetCounter; // 0x0
	};
};
