#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFire;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7f8
	// Has VTable
	class CFire : public server::CBaseModelEntity
	{
	public:
		CHandle<server::CBaseFire> m_hEffect; // 0x768		
		CHandle<server::CBaseEntity> m_hOwner; // 0x76c		
		int32_t m_nFireType; // 0x770		
		float m_flFuel; // 0x774		
		entity2::GameTime_t m_flDamageTime; // 0x778		
		entity2::GameTime_t m_lastDamage; // 0x77c		
		float m_flFireSize; // 0x780		
		entity2::GameTime_t m_flLastNavUpdateTime; // 0x784		
		float m_flHeatLevel; // 0x788		
		float m_flHeatAbsorb; // 0x78c		
		float m_flDamageScale; // 0x790		
		float m_flMaxHeat; // 0x794		
		float m_flLastHeatLevel; // 0x798		
		float m_flAttackTime; // 0x79c		
		bool m_bEnabled; // 0x7a0		
		bool m_bStartDisabled; // 0x7a1		
		bool m_bDidActivate; // 0x7a2		
	private:
		[[maybe_unused]] uint8_t __pad07a3[0x5]; // 0x7a3
	public:
		entity2::CEntityIOOutput m_OnIgnited; // 0x7a8		
		entity2::CEntityIOOutput m_OnExtinguished; // 0x7d0		
		
		// Datamap fields:
		// void CFireBurnThink; // 0x0
		// void CFireGoOutThink; // 0x0
		// void InputStartFire; // 0x0
		// float InputExtinguish; // 0x0
		// float InputExtinguishTemporary; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
