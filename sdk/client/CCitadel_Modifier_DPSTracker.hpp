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
	// Size: 0xc8
	// Has VTable
	class CCitadel_Modifier_DPSTracker : public client::CCitadelModifier
	{
	public:
		float m_flProgress; // 0xc0		
		float m_flDistToTarget; // 0xc4		
	};
};
