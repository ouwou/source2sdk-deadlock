#pragma once
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xd78
	// Has VTable
	// 
	// MNetworkVarNames "QAngle m_anglesCharging"
	// MNetworkVarNames "GameTime_t m_flChargeStartTime"
	// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
	class CCitadel_Ability_Bull_Charge : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities; // 0xad8		
		bool m_bGainedWeaponPowerBuff; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af1[0x26f]; // 0xaf1
	public:
		// MNetworkEnable
		QAngle m_anglesCharging; // 0xd60		
		// MNetworkEnable
		// MNetworkChangeCallback "OnChargingStateChanged"
		entity2::GameTime_t m_flChargeStartTime; // 0xd6c		
		// MNetworkEnable
		entity2::GameTime_t m_flFastChargeEndTime; // 0xd70		
	};
};
