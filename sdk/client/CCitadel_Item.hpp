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
	// Size: 0xc78
	// Has VTable
	// 
	// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
	class CCitadel_Item : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlStringToken> m_vecComponentsConsumed; // 0xc60		
	};
};
