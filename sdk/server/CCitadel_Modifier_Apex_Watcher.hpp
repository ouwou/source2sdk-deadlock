#pragma once
#include "server/CCitadel_Modifier_Out_Of_Combat_Health_Regen.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x180
	// Has VTable
	class CCitadel_Modifier_Apex_Watcher : public server::CCitadel_Modifier_Out_Of_Combat_Health_Regen
	{
	public:
		bool m_bShouldEnableBuff; // 0x140		
	};
};
