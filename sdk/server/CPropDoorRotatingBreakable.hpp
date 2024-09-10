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
	// Size: 0xf98
	// Has VTable
	class CPropDoorRotatingBreakable : public server::CPropDoorRotating
	{
	public:
		bool m_bBreakable; // 0xf78		
		bool m_isAbleToCloseAreaPortals; // 0xf79		
	private:
		[[maybe_unused]] uint8_t __pad0f7a[0x2]; // 0xf7a
	public:
		int32_t m_currentDamageState; // 0xf7c		
		CUtlVector<CUtlSymbolLarge> m_damageStates; // 0xf80		
		
		// Datamap fields:
		// void InputSetUnbreakable; // 0x0
		// void InputSetBreakable; // 0x0
	};
};
