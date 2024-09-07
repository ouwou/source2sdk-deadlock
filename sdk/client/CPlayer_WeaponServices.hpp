#pragma once
#include "client/CPlayerPawnComponent.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BasePlayerWeapon;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< C_BasePlayerWeapon > m_hMyWeapons"
	// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
	// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
	// MNetworkVarNames "uint16 m_iAmmo"
	class CPlayer_WeaponServices : public client::CPlayerPawnComponent
	{
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BasePlayerWeapon>> m_hMyWeapons; // 0x40		
		// MNetworkEnable
		CHandle<client::C_BasePlayerWeapon> m_hActiveWeapon; // 0x58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CHandle<client::C_BasePlayerWeapon> m_hLastWeapon; // 0x5c		
		// MNetworkEnable
		uint16_t m_iAmmo[32]; // 0x60		
	};
};
