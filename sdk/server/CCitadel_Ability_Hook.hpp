#pragma once
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xcb8
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hHookVictim"
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "Vector m_vecHookTargetStartPos"
	class CCitadel_Ability_Hook : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "HookVictimChanged"
		CHandle<server::CBaseEntity> m_hHookVictim; // 0xad8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hProjectile; // 0xadc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vecHookTargetStartPos; // 0xae0		
		bool m_bIsAltCast; // 0xaec		
		bool m_bProjectileHit; // 0xaed		
	private:
		[[maybe_unused]] uint8_t __pad0aee[0x2]; // 0xaee
	public:
		float m_flLastUppercutRestoreTime; // 0xaf0		
	};
};
