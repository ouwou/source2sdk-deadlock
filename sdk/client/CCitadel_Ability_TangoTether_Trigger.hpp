#pragma once
#include "client/CCitadelBaseTriggerAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc78
	// Has VTable
	class CCitadel_Ability_TangoTether_Trigger : public client::CCitadelBaseTriggerAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c70[0x4]; // 0xc70
	public:
		CHandle<client::C_CitadelBaseAbility> m_hBaseAbility; // 0xc74		
	};
};
