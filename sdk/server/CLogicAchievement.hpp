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
	// Size: 0x510
	// Has VTable
	class CLogicAchievement : public server::CLogicalEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
	public:
		CUtlSymbolLarge m_iszAchievementEventID; // 0x4e0		
		entity2::CEntityIOOutput m_OnFired; // 0x4e8		
		
		// Datamap fields:
		// void InputFireEvent; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
	};
};
