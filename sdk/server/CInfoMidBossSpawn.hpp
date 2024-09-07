#pragma once
#include "server/CServerOnlyPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CInfoMidBossSpawn : public server::CServerOnlyPointEntity
	{
	public:
		int32_t m_iCoverGroupID; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_iszSquadName; // 0x4e0		
	};
};
