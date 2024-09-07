#pragma once
#include "client/ERejuvenatorRespawnMechanic.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_RespawnCreditVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Respawn Settings"
		client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x5f8		
		// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
		// MPropertyDescription "Respawn time is set to this fixed duration after dying."
		float m_flRespawnDelay; // 0x5fc		
		// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
		// MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
		float m_flPercentOfNormalRespawn; // 0x600		
		// MPropertyStartGroup "Buff Values"
		float m_flBonusClipSize; // 0x604		
		float m_flBonusFirerate; // 0x608		
		float m_flBonusHealth; // 0x60c		
		float m_flBonusMoveSpeedMeterPerSecond; // 0x610		
	private:
		[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sExpireSound; // 0x618		
	};
};
