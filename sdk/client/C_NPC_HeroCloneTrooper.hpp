#pragma once
#include "client/C_AI_CitadelNPC.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1498
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hOwner"
	class C_NPC_HeroCloneTrooper : public client::C_AI_CitadelNPC
	{
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hOwner; // 0x1490		
	};
};
