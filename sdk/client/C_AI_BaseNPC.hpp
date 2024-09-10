#pragma once
#include "client/C_BaseCombatCharacter.hpp"
#include "client/NPC_STATE.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd68
	// Has VTable
	// 
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "NPC_STATE m_NPCState"
	// MNetworkVarNames "bool m_bFadeCorpse"
	// MNetworkVarNames "bool m_bImportantRagdoll"
	class C_AI_BaseNPC : public client::C_BaseCombatCharacter
	{
	public:
		// MNetworkEnable
		client::NPC_STATE m_NPCState; // 0xd60		
		// MNetworkEnable
		bool m_bFadeCorpse; // 0xd64		
		// MNetworkEnable
		bool m_bImportantRagdoll; // 0xd65		
	};
};
