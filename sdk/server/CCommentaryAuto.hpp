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
	// Size: 0x550
	// Has VTable
	class CCommentaryAuto : public server::CBaseEntity
	{
	public:
		entity2::CEntityIOOutput m_OnCommentaryNewGame; // 0x4d8		
		entity2::CEntityIOOutput m_OnCommentaryMidGame; // 0x500		
		entity2::CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x528		
		
		// Datamap fields:
		// void InputMultiplayerSpawned; // 0x0
	};
};
