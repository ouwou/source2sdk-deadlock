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
	// Size: 0x610
	// Has VTable
	class CMultiSource : public server::CLogicalEntity
	{
	public:
		CHandle<server::CBaseEntity> m_rgEntities[32]; // 0x4d8		
		int32_t m_rgTriggered[32]; // 0x558		
		entity2::CEntityIOOutput m_OnTrigger; // 0x5d8		
		int32_t m_iTotal; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
	public:
		CUtlSymbolLarge m_globalstate; // 0x608		
		
		// Datamap fields:
		// void CMultiSourceRegister; // 0x0
	};
};
