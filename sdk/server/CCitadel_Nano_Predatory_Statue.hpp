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
	// Size: 0xb40
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
	class CCitadel_Nano_Predatory_Statue : public server::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0b20[0x18]; // 0xb20
	public:
		// MNetworkEnable
		CHandle<server::CCitadelBaseAbility> m_hAbility; // 0xb38		
		float m_flLifetime; // 0xb3c		
	};
};
