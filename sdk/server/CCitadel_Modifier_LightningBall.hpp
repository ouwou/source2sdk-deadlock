#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x178
	// Has VTable
	class CCitadel_Modifier_LightningBall : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
	public:
		CHandle<server::CBaseEntity> m_hProjectile; // 0x170		
	};
};
