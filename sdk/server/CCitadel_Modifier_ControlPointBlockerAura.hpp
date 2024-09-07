#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelControlPointTrigger;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_ControlPointBlockerAura : public server::CCitadelModifierAura
	{
	public:
		CHandle<server::CCitadelControlPointTrigger> m_hCP; // 0xe8		
	};
};
