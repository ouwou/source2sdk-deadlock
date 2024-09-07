#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x670
	// Has VTable
	class CLogicAuto : public server::CBaseEntity
	{
	public:
		entity2::CEntityIOOutput m_OnMapSpawn; // 0x4d8		
		entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x500		
		entity2::CEntityIOOutput m_OnNewGame; // 0x528		
		entity2::CEntityIOOutput m_OnLoadGame; // 0x550		
		entity2::CEntityIOOutput m_OnMapTransition; // 0x578		
		entity2::CEntityIOOutput m_OnBackgroundMap; // 0x5a0		
		entity2::CEntityIOOutput m_OnMultiNewMap; // 0x5c8		
		entity2::CEntityIOOutput m_OnMultiNewRound; // 0x5f0		
		entity2::CEntityIOOutput m_OnVREnabled; // 0x618		
		entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x640		
		CUtlSymbolLarge m_globalstate; // 0x668		
	};
};
