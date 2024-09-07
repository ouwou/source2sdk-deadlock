#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_Passive_Camouflage : public client::CCitadelModifier
	{
	public:
		float m_flRate; // 0xc0		
		Vector m_vLastPosition; // 0xc4		
	};
};
