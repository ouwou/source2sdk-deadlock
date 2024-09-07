#pragma once
#include "client/ENeutralTrooperType.hpp"
#include "server/CServerOnlyPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x500
	// Has VTable
	class CInfoTrooperNeutralSpawn : public server::CServerOnlyPointEntity
	{
	public:
		int32_t m_iCoverGroupID; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_iszSquadName; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e8[0xc]; // 0x4e8
	public:
		client::ENeutralTrooperType m_eTrooperType; // 0x4f4		
	};
};
