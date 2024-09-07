#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc68
	// Has VTable
	class CCitadel_Ability_Fealty : public client::C_CitadelBaseAbility
	{
	public:
		CHandle<client::C_BaseEntity> m_hTarget; // 0xc60		
	};
};
