#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe08
	// Has VTable
	class CCitadel_Ability_Thumper_1 : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vecAimPos; // 0xc60		
		Vector m_vecAimNormal; // 0xc6c		
		float m_flPushForce; // 0xc78		
	};
};
