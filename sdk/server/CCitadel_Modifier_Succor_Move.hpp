#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Succor_Move : public server::CCitadelModifier
	{
	public:
		bool m_bHasPulled; // 0xc8		
		bool m_bIsPulling; // 0xc9		
	};
};
