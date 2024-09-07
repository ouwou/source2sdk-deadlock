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
	// Size: 0xaf8
	// Has VTable
	// 
	// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
	class CCitadel_Item : public server::CCitadelBaseAbility
	{
	public:
		bool m_bEquipped; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0ad9[0x7]; // 0xad9
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecComponentsConsumed; // 0xae0		
	};
};
