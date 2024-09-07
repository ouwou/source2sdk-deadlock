#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x960
	// Has VTable
	class CTriggerRemove : public server::CBaseTrigger
	{
	public:
		entity2::CEntityIOOutput m_OnRemove; // 0x938		
	};
};
