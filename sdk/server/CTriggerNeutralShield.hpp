#pragma once
#include "server/CBaseTrigger.hpp"
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
	// Size: 0x968
	// Has VTable
	class CTriggerNeutralShield : public server::CBaseTrigger
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecPlayers; // 0x938		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecNeutrals; // 0x950		
	};
};
