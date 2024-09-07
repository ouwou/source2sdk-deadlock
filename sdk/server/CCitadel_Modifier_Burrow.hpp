#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CTriggerBurrowUnderground;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Burrow : public server::CCitadelModifier
	{
	public:
		CHandle<server::CTriggerBurrowUnderground> m_pUndergroundTrigger; // 0xc8		
		entity2::GameTime_t m_flLastDamageTime; // 0xcc		
	};
};
