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
	// Size: 0xaa8
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
	class C_Citadel_Nano_Predatory_Statue : public client::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0a98[0x8]; // 0xa98
	public:
		// MNetworkEnable
		CHandle<client::C_CitadelBaseAbility> m_hAbility; // 0xaa0		
		float m_flLifetime; // 0xaa4		
	};
};
