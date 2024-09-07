#pragma once
#include "server/CCitadelProjectile.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAbility_Mirage_Tornado;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x978
	// Has VTable
	class CProjectile_Mirage_Tornado : public server::CCitadelProjectile
	{
	public:
		int32_t m_cTicksNoMovement; // 0x820		
		CHandle<server::CAbility_Mirage_Tornado> m_TornadoAbility; // 0x824		
	};
};
