#pragma once
#include "client/CPlayerPawnComponent.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerWeapon;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
	// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
	// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
	// MNetworkVarNames "uint16 m_iAmmo"
	class CPlayer_WeaponServices : public client::CPlayerPawnComponent
	{
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBasePlayerWeapon>> m_hMyWeapons; // 0x40		
		// MNetworkEnable
		CHandle<server::CBasePlayerWeapon> m_hActiveWeapon; // 0x58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CHandle<server::CBasePlayerWeapon> m_hLastWeapon; // 0x5c		
		// MNetworkEnable
		uint16_t m_iAmmo[32]; // 0x60		
		bool m_bPreventWeaponPickup; // 0xa0		
	};
};
