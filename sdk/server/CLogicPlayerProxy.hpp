#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicalEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x580
	// Has VTable
	class CLogicPlayerProxy : public server::CLogicalEntity
	{
	public:
		CHandle<server::CBaseEntity> m_hPlayer; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		entity2::CEntityIOOutput m_PlayerHasAmmo; // 0x4e0		
		entity2::CEntityIOOutput m_PlayerHasNoAmmo; // 0x508		
		entity2::CEntityIOOutput m_PlayerDied; // 0x530		
		CEntityOutputTemplate<int32_t> m_RequestedPlayerHealth; // 0x558		
	};
};
