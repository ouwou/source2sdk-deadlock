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
	// Size: 0x14b0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flForwardSpeed"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
	class C_NPC_NanoRollermine : public client::C_AI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad1490[0x18]; // 0x1490
	public:
		// MNetworkEnable
		float m_flForwardSpeed; // 0x14a8		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hOwnerPawn; // 0x14ac		
	};
};
