#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelAnimatingModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc48
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hProjectile"
	// MNetworkVarNames "float m_flArrowSpeed"
	// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
	// MNetworkVarNames "int m_nBonusTechPower"
	class CCitadel_Ability_GuidedArrow : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x8]; // 0xad8
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hProjectile; // 0xae0		
		// MNetworkEnable
		float m_flArrowSpeed; // 0xae4		
		// MNetworkEnable
		entity2::GameTime_t m_flSnapAnglesBackTime; // 0xae8		
		// MNetworkEnable
		int32_t m_nBonusTechPower; // 0xaec		
		CHandle<server::CCitadelAnimatingModelEntity> m_hOwl; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af4[0xc]; // 0xaf4
	public:
		entity2::GameTime_t m_flCastTime; // 0xb00		
		bool m_bNeedsExplosion; // 0xb04		
	private:
		[[maybe_unused]] uint8_t __pad0b05[0x3]; // 0xb05
	public:
		Vector m_vProjectileRemovedOrigin; // 0xb08		
		QAngle m_angCasterAnglesAtCastTime; // 0xb14		
		float m_flTravelDistance; // 0xb20		
		bool m_bInKillFlow; // 0xb24		
	private:
		[[maybe_unused]] uint8_t __pad0b25[0x3]; // 0xb25
	public:
		float m_flProjectileTurnVel; // 0xb28		
	};
};
