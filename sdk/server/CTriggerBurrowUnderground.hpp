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
	// Size: 0x950
	// Has VTable
	class CTriggerBurrowUnderground : public server::CBaseTrigger
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_pTouchedEntities; // 0x938		
	};
};
