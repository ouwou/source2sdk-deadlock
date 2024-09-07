#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xba0
	// Has VTable
	class CCitadel_Ability_Thumper_2 : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vStompPos; // 0xad8		
		Vector m_vStompDir; // 0xae4		
		int32_t m_nStomps; // 0xaf0		
	};
};
