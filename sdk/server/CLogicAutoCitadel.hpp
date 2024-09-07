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
	// Size: 0x558
	// Has VTable
	class CLogicAutoCitadel : public server::CBaseEntity
	{
	public:
		entity2::CEntityIOOutput m_OnWaitingForPlayersToJoin; // 0x4d8		
		entity2::CEntityIOOutput m_OnPreGameWait; // 0x500		
		entity2::CEntityIOOutput m_OnGameInProgress; // 0x528		
	};
};
