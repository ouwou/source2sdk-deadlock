#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdd0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hActiveProjectile"
	class CAbility_Synth_PlasmaFlux : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
	public:
		bool m_bTeleported; // 0xc68		
	private:
		[[maybe_unused]] uint8_t __pad0c69[0x3]; // 0xc69
	public:
		entity2::GameTime_t m_flProjectileLaunchTime; // 0xc6c		
		entity2::GameTime_t m_flProjectileExpireTime; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<client::C_BaseEntity> m_hActiveProjectile; // 0xc74		
	};
};
