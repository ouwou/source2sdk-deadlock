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
	// Size: 0xdc0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "float m_flArrowSpeed"
	// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
	// MNetworkVarNames "int m_nBonusTechPower"
	class CCitadel_Ability_GuidedArrow : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hProjectile; // 0xc68		
		// MNetworkEnable
		float m_flArrowSpeed; // 0xc6c		
		// MNetworkEnable
		entity2::GameTime_t m_flSnapAnglesBackTime; // 0xc70		
		// MNetworkEnable
		int32_t m_nBonusTechPower; // 0xc74		
		entity2::GameTime_t m_flCastTime; // 0xc78		
		bool m_bNeedsExplosion; // 0xc7c		
	private:
		[[maybe_unused]] uint8_t __pad0c7d[0x3]; // 0xc7d
	public:
		Vector m_vProjectileRemovedOrigin; // 0xc80		
		QAngle m_angCasterAnglesAtCastTime; // 0xc8c		
		float m_flTravelDistance; // 0xc98		
		bool m_bInKillFlow; // 0xc9c		
	private:
		[[maybe_unused]] uint8_t __pad0c9d[0x3]; // 0xc9d
	public:
		float m_flProjectileTurnVel; // 0xca0		
	};
};
