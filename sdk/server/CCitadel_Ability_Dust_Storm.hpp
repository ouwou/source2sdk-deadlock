#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadel_Ability_Spinning_Blade;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb68
	// Has VTable
	class CCitadel_Ability_Dust_Storm : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadel_Ability_Spinning_Blade> m_hSpinningBladeAbility; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0adc[0x4]; // 0xadc
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vTargets; // 0xae0		
	};
};
