#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseEntity.hpp"
#include "server/EntFinderMethod_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x528
	// Has VTable
	class CPointEntityFinder : public server::CBaseEntity
	{
	public:
		CHandle<server::CBaseEntity> m_hEntity; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_iFilterName; // 0x4e0		
		CHandle<server::CBaseFilter> m_hFilter; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		CUtlSymbolLarge m_iRefName; // 0x4f0		
		CHandle<server::CBaseEntity> m_hReference; // 0x4f8		
		server::EntFinderMethod_t m_FindMethod; // 0x4fc		
		entity2::CEntityIOOutput m_OnFoundEntity; // 0x500		
		
		// Datamap fields:
		// void InputFindEntity; // 0x0
	};
};
