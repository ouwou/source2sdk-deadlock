#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CCitadelModifier;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_Unstoppable : public client::CCitadelModifier
	{
	public:
		CUtlVector<client::CCitadelModifier*> m_vecCheckedModifiers; // 0xc0		
	};
};
