#pragma once
#include "server/CCitadelAnimatingModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
	// MNetworkVarNames "bool m_bFloating"
	class CCitadel_MobileResupply : public server::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0af8[0x5c]; // 0xaf8
	public:
		// MNetworkEnable
		CHandle<server::CCitadelBaseAbility> m_hAbility; // 0xb54		
		// MNetworkEnable
		bool m_bFloating; // 0xb58		
	};
};