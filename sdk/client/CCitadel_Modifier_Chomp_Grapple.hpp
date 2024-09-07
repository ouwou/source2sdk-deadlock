#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x1a8
	// Has VTable
	class CCitadel_Modifier_Chomp_Grapple : public client::CCitadelModifier
	{
	public:
		CHandle<client::C_BaseEntity> m_hMoveToTarget; // 0xc0		
	};
};
