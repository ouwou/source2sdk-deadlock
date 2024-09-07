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
	// Size: 0x5d8
	// Has VTable
	class CInfoSpawnGroupLoadUnload : public server::CLogicalEntity
	{
	public:
		entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4d8		
		entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x500		
		entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x528		
		entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x550		
		CUtlSymbolLarge m_iszSpawnGroupName; // 0x578		
		CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x580		
		CUtlSymbolLarge m_iszLandmarkName; // 0x588		
		CUtlString m_sFixedSpawnGroupName; // 0x590		
		float m_flTimeoutInterval; // 0x598		
		bool m_bStreamingStarted; // 0x59c		
		bool m_bUnloadingStarted; // 0x59d		
		
		// Datamap fields:
		// void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
		// void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
		// void InputStartSpawnGroupLoad; // 0x0
		// void InputActivateSpawnGroup; // 0x0
		// void InputStartSpawnGroupUnload; // 0x0
		// CUtlSymbolLarge InputSetSpawnGroup; // 0x0
	};
};
