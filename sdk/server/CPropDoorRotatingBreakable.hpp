#pragma once
#include "server/CPropDoorRotating.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf70
	// Has VTable
	class CPropDoorRotatingBreakable : public server::CPropDoorRotating
	{
	public:
		bool m_bBreakable; // 0xf50		
		bool m_isAbleToCloseAreaPortals; // 0xf51		
	private:
		[[maybe_unused]] uint8_t __pad0f52[0x2]; // 0xf52
	public:
		int32_t m_currentDamageState; // 0xf54		
		CUtlVector<CUtlSymbolLarge> m_damageStates; // 0xf58		
		
		// Datamap fields:
		// void InputSetUnbreakable; // 0x0
		// void InputSetBreakable; // 0x0
	};
};
