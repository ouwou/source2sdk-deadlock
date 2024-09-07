#pragma once
#include "client/ELassoHoldPosition.hpp"
#include "server/CCitadel_Modifier_Stunned.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	class CCitadel_Modifier_Gravity_Lasso_Enemy : public server::CCitadel_Modifier_Stunned
	{
	public:
		client::ELassoHoldPosition m_eHoldPosition; // 0xd0		
	};
};
