#pragma once
#include "client/CCitadel_Modifier_Stunned.hpp"
#include "client/ELassoHoldPosition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Gravity_Lasso_Enemy : public client::CCitadel_Modifier_Stunned
	{
	public:
		client::ELassoHoldPosition m_eHoldPosition; // 0xc8		
	};
};
