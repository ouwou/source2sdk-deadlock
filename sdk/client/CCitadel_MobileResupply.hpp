#pragma once
#include "client/CCitadelAnimatingModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xaa0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
	// MNetworkVarNames "bool m_bFloating"
	class CCitadel_MobileResupply : public client::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		CHandle<client::C_CitadelBaseAbility> m_hAbility; // 0xa98		
		// MNetworkEnable
		bool m_bFloating; // 0xa9c		
	};
};
