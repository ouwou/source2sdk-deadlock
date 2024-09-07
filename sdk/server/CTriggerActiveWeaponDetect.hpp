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
	// Size: 0x968
	// Has VTable
	class CTriggerActiveWeaponDetect : public server::CBaseTrigger
	{
	public:
		entity2::CEntityIOOutput m_OnTouchedActiveWeapon; // 0x938		
		CUtlSymbolLarge m_iszWeaponClassName; // 0x960		
		
		// Datamap fields:
		// void CTriggerActiveWeaponDetectActiveWeaponThink; // 0x0
	};
};
