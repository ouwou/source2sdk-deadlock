#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	class CNPCSpawnDestination : public server::CPointEntity
	{
	public:
		float m_ReuseDelay; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_RenameNPC; // 0x4e0		
		entity2::GameTime_t m_TimeNextAvailable; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		entity2::CEntityIOOutput m_OnSpawnNPC; // 0x4f0		
	};
};
